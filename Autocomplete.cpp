#include "Autocomplete.h"
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

Autocomplete::Autocomplete(const vector<Term>& terms){
  Terms = terms;
  sort(Terms.begin(), Terms.end());
}

vector<Term> Autocomplete::allMatches(string prefix){
  vector <Term> result;
  int lo = firstIndexOf(Terms, Term(prefix,0), PrefixOrder(prefix.size()));
  int hi = lastIndexOf(Terms, Term(prefix,0), PrefixOrder(prefix.size()));
  for (int i = lo; i < hi; i++){
    result.push_back(Terms[i]);
  }
  sort(result.begin(),result.end(),ReverseWeightOrder());
  return result;
}

int Autocomplete::numberOfMatches(string prefix){
  int lo = firstIndexOf(Terms, Term(prefix,0), PrefixOrder(prefix.length()));
  int hi = lastIndexOf(Terms, Term(prefix,0), PrefixOrder(prefix.length()));
  int count = hi - lo;
  return count;
}
