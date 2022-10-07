#include "set.hpp"
#include <iostream>
using namespace std;

Set::Set() : vectorlist(vector<int>()) {}

Set::Set(vector<int> vectorlist_) : vectorlist(vectorlist_){};

void Set::set(vector<int> vector_) {
  vectorlist = vector_;
}

Set Set::operator<<(const Set &other) const {
  Set result = *this;
  for (size_t i = 0; i < other.vectorlist.size(); ++i) {
    result += other.vectorlist[i];
  }
  return result;
}

Set &Set::operator+=(const int &number) {
  Set result = *this;
  bool contains = false;
  for (size_t i = 0; i < result.vectorlist.size(); ++i) {
    if (number == result.vectorlist[i]) {
      contains = true;
    }
  }
  if (!contains) {
    result.vectorlist.emplace_back(number);
  }
  set(result.vectorlist);
  return *this;
}

Set &Set::operator=(const Set &other) {
  vectorlist = other.vectorlist;
  return *this;
}

void Set::print() {
  cout << "{";
  for (size_t i = 0; i < vectorlist.size(); ++i) {
    cout << vectorlist[i] << " ";
  }
  cout << "}" << endl;
}
