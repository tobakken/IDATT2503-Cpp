#pragma once
#include <vector>

using namespace std;

class Set {

public:
  vector<int> vectorlist;

  Set(std::vector<int> vector_);
  Set();
  void set(vector<int> vector_);
  Set operator<<(const Set &other) const;
  Set &operator+=(const int &number);
  Set &operator=(const Set &other);
  void print();
};
