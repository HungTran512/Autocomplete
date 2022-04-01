#include <algorithm>
#include <cctype>
#include <fstream>
#include <functional>
#include <iostream>
#include <locale>
#include <sstream>
#include <string>
#include "Autocomplete.h"
using namespace std;

// trim from start (in place)
void ltrim(string &s) {
    s.erase(s.begin(), find_if(s.begin(), s.end(),
            not1(ptr_fun<int, int>(isspace))));
}

int main(int argc, char* argv[]) {
    // read in terms from a file
    string filename(argv[1]);
    ifstream in;
    in.open(filename);

    if(!in.is_open()) {
        cout << "File cannot be opened: " << filename << endl;
        return 1;
    }

    int N;
    in >> N;
    in.ignore(numeric_limits<streamsize>::max(),'\n');

    vector<Term> terms;
    for (int i = 0; i < N; i++) {
        long weight;
        string query, line;
        getline(in, line);
        stringstream lineStream(line);
        lineStream >> weight;
        getline(lineStream, query);
        ltrim(query);
        terms.push_back(Term(query, weight));
    }

    in.close();

    // read in queries from standard input and print the top k matching terms
    int k = atoi(argv[2]);
    Autocomplete autocomplete(terms);
    string prefix;
    while (getline(cin, prefix)) {
        ltrim(prefix);
        vector<Term> results = autocomplete.allMatches(prefix);
        for (int i = 0; i < min(k, (int)results.size()); i++) {
            cout << results.at(i) << endl;
        }
    }

    return 0;
}
