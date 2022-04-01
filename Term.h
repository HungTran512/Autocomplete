#ifndef TERM_H
#define TERM_H
#include <string>
#include <iostream>
using namespace std;

class Term {
  public:
    // Initializes a term with the given query string and weight.
    Term(string query, long weight);
    // Accesses the query string of this term
    string getQuery() const;

    // Accesses the weight of this term
    long getWeight() const;

    // Compares the two terms in lexicographic order by query
    bool operator<(const Term &other) const;

    /* Displays this term in the following format:
       the weight, followed by a tab, followed by the query */
    friend ostream & operator << (ostream &out, const Term &t);
  private:
    string Query;
    long Weight;
};

// Compares the two terms in descending order by weight
struct ReverseWeightOrder {
    bool operator()(const Term& v, const Term& w);
};

/* Compares the two terms in lexicoggraphic order but using only the first r
   characters of each query */
struct PrefixOrder {
    PrefixOrder(int r);
    bool operator()(const Term& v, const Term& w);
  private:
    int R;
 };

 #endif
