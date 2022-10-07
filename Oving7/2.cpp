#include "set.cpp"

int main() {
  // initialize empty
  Set a;

  // add number
  a += 1;

  // print the Set
  a.print();

  // add more numbers
  a += 2;
  a += 3;
  a += 1;

  a.print();

  // initialize new Set with vector
  Set b({3, 4, 5});

  // union of a and b, 3 should only be added once
  Set c = a << b;
  c.print();

  // set Set c equal to Set b
  c = b;
  c.print();
}
