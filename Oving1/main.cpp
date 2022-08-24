#include <iostream>

using namespace std;

int main() {

  int length = 5;

  cout << "Du skal skrive inn " << length << " temperaturer \n";
  int under = 0;
  int between = 0;
  int over = 0;

  for (int i = 0; i < length; i++) {
    int temp;
    cout << "Temperatur " << i + 1 << ":";
    cin >> temp;
    if (temp > 20) {
      over++;
    } else if (temp > 10) {
      between++;
    } else {
      under++;
    }
  }
  cout << "Antall under 10 er " << under << "\n";
  cout << "Antall mellom 10 og 20 er " << between << "\n";
  cout << "Antall over 20 er " << over << "\n";
}
