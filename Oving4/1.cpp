#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<double> double_vector = {3, 5, 4, 7, 8};

  cout << "Første element: " << double_vector.front() << ", Siste element: " << double_vector.back() << endl;

  double_vector.emplace(double_vector.begin() + 1, 9);

  cout << "Første element: " << double_vector.front() << endl;

  vector<double>::iterator finder;
  finder = find(double_vector.begin(), double_vector.end(), 6);
  if (finder != double_vector.end()) {
    cout << "Element funnet: " << *finder << endl;
  } else {
    cout << "Kunne ikke finne tallet du søkte etter" << endl;
  }
}
