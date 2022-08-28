#include <fstream>
#include <iostream>

using namespace std;
void read_temperatures(double temperatures[], int length);

int main() {
  double temperatures[5];
  int length = 5;
  read_temperatures(temperatures, length);
  int under = 0;
  int between = 0;
  int over = 0;

  for (int i = 0; i < length; i++) {
    int temp = temperatures[i];
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

void read_temperatures(double temperatures[], int length) {
  const char filename[] = "numbers.dat";
  ifstream file;       // definerer filvariabel
  file.open(filename); // åpner filen
  if (!file) {         // innfil kan brukes som et logisk uttrykk
    cout << "Feil ved åpning av innfil." << endl;
    exit(EXIT_FAILURE); // uthopp fra programmet
  }

  int number;
  for (int i = 0; i < length; i++) {
    file >> number;
    temperatures[i] = number;
    cout << temperatures[i] << endl;
  }

  file.close();
}
