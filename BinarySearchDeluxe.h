
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// Returns the first index of the specified key in the specified array
template<typename Key, typename Compare>
int firstIndexOf(const vector<Key>& a, Key key, Compare comparator){
  auto SearchVal = lower_bound(a.begin(), a.end(), key, comparator);
  return distance(a.begin(), SearchVal);
}

// Returns the last index of the specified key in the specified array
template<typename Key, typename Compare>
int lastIndexOf(const vector<Key>& a, Key key, Compare comparator){
  auto SearchVal = upper_bound(a.begin(), a.end(), key, comparator);
  return distance(a.begin(), SearchVal);
}
