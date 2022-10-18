#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

ostream &operator<<(ostream &out, const vector<int> &table) {
  for (auto &e : table)
    out << e << " ";
  return out;
}

int main() {
  vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
  cout << "v1: " << v1 << endl;

  vector<int> v2 = {2, 3, 12, 14, 24};
  cout << "v2: " << v2 << endl;

  // a)
  auto pos = find_if(v1.begin(), v1.end(), [](int i) { return i > 15; });
  cout << "Første verdi større enn 15 er " << (pos - v1.begin()) << endl;

  // b)
  bool isEqual = equal(v1.begin(), v1.begin() + 5, v2.begin(), [](int i, int j) {
    return (abs(i - j) < 3);
  });
  cout << "Er de fem første tallene i v1 lik v2? " << (isEqual ? "Ja" : "Nei") << endl;

  isEqual = equal(v1.begin(), v1.begin() + 4, v2.begin(), [](int i, int j) {
    return (abs(i - j) < 3);
  });
  cout << "Er de fire første tallene i v1 lik v2? " << (isEqual ? "Ja" : "Nei") << endl;

  // c)
  vector<int> v3;
  v3.resize(v1.size());
  replace_copy_if(
      v1.begin(), v1.end(), v3.begin(), [](int i) { return i % 2 != 0; }, 100);
  cout << "v3: " << v3 << endl;
}
