#include <iostream>

using namespace std;

template <typename T, typename U>
class Pair {
public:
  T first;
  U second;
  Pair(T _first, U _second) : first(_first), second(_second){};

  // Antar at + legger sammen tall a med a og b med b og returnerer nytt par
  Pair operator+(const Pair &other) {
    Pair pair = *this;
    pair.first += other.first;
    pair.second += other.second;
    return pair;
  }

  // Antar at > sjekker at summen av paret er større enn summen av det andre
  bool operator>(const Pair &other) {
    Pair pair = *this;
    auto sum_first = pair.first + pair.second;
    auto sum_second = other.first + other.second;
    return (sum_first > sum_second);
  }
};

int main() {
  Pair<double, int> p1(3.5, 14);
  Pair<double, int> p2(2.1, 7);
  cout << "p1: " << p1.first << ", " << p1.second << endl;
  cout << "p2: " << p2.first << ", " << p2.second << endl;

  if (p1 > p2)
    cout << "p1 er størst" << endl;
  else
    cout << "p2 er størst" << endl;

  auto sum = p1 + p2;
  cout << "Sum: " << sum.first << ", " << sum.second << endl;
}

/* Utskrift:
p1: 3.5, 14
p2: 2.1, 7
p1 er størst
Sum: 5.6, 21
*/
