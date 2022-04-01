#include "Term.h"
#include <string>
#include <iostream>
#include<algorithm>
#include <iomanip>
using namespace std;


bool ReverseWeightOrder::operator()(const Term& v, const Term& w){
  return v.getWeight() > w.getWeight();
}

PrefixOrder::PrefixOrder(int r){
  R = r;
  if (r < 0) throw runtime_error("Negative r");
}

bool PrefixOrder::operator()(const Term& v, const Term& w){
  string prefix1 = v.getQuery();
  string prefix2 = w.getQuery();
  if(prefix1.length() > R){
    prefix1 = prefix1.substr(0,R);
  }
  if(prefix2.length() > R){
    prefix2 = prefix2.substr(0,R);
  }
    return prefix1 < prefix2;
}

Term::Term(string query, long weight){
  Query = query;
  Weight = weight;
  if (weight < 0) throw runtime_error("Negative Weigth");
}

string Term::getQuery() const{
  return Query;
}

long Term::getWeight() const{
  return Weight;
}

bool Term::operator<(const Term &other) const{
  return Query < other.Query;
}

ostream & operator << (ostream &out, const Term &t){
  out << setw(8) << t.getWeight() << "  "
      << t.getQuery() << endl;
  return out;
}
