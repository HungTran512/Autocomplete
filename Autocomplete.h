#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include "Term.h"
#include "BinarySearchDeluxe.h"
#include <vector>
using namespace std;

class Autocomplete {
public:
    // Initializes the data structure from the given array of terms
    Autocomplete(const vector<Term>& terms);

    /* Returns all terms that start with the given prefix, in descending order
       of weight */
    vector<Term> allMatches(string prefix);

    // Returns the number of terms that start with the given prefix
    int numberOfMatches(string prefix);
private:
  vector <Term> Terms;
};
#endif
