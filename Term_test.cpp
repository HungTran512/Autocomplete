#include "Term.h"
#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;

int main(){
  vector <Term> Terms;
  Term newTerm( "VietNam", 10);
  Terms.push_back(newTerm);
  Term newTerm1( "America", 20);
  Terms.push_back(newTerm1);
  Term newTerm2( "China", 60);
  Terms.push_back(newTerm2);
  Term newTerm4( "Brazil", 30);
  Terms.push_back(newTerm4);
  Term newTerm5( "Dominos", 90);
  Terms.push_back(newTerm5);
  Term newTerm6( "Cigar", 40);
  Terms.push_back(newTerm6);
  Term newTerm7( "Cat", 50);
  Terms.push_back(newTerm7);
  cout << "Original Array!" << endl;
  for (Term s : Terms){
    cout << s;
  }
  cout << endl;
  cout << "Sorted Array!" << endl;
  sort(Terms.begin(), Terms.end(), PrefixOrder(3));
  for (Term s : Terms){
    cout << s;
  }
  return 0;
}
