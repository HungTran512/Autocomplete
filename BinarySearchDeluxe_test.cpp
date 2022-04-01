#include "BinarySearchDeluxe.h"
#include "Term.h"
#include <iostream>
#include<algorithm>
using namespace std;

int main(){
  vector <Term> Terms;
  Term newTerm2( "China", 0);
  Terms.push_back(newTerm2);
  Term newTerm( "VietNam", 10);
  Terms.push_back(newTerm);
  Term newTerm1( "America",20);
  Terms.push_back(newTerm1);
  Term newTerm4( "Brazil", 20);
  Terms.push_back(newTerm4);
  Term newTerm5( "Dominos", 40);
  Terms.push_back(newTerm5);
  Term newTerm6( "Cigar", 0);
  Terms.push_back(newTerm6);
  Term newTerm7( "Cat", 0);
  Terms.push_back(newTerm7);
  Term newTerm70( "Car", 0);
  Terms.push_back(newTerm70);
  Term newTerm8( "Italy", 60);
  Terms.push_back(newTerm8);
  Term newTerm9( "Romania", 70);
  Terms.push_back(newTerm9);
  Term newTerm10( "Nepal", 80);
  Terms.push_back(newTerm10);
  Term key("C", 0);
  sort(Terms.begin(), Terms.end());
  for (Term s : Terms){
    cout << s;
  }
  int a = firstIndexOf(Terms, key, PrefixOrder(1));
  int b = lastIndexOf(Terms, key, PrefixOrder(1));

  cout <<"This is first index: " << a << endl;
  cout << "This is the last index: " << b << endl;
}
