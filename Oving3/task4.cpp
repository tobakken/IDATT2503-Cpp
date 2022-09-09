#include <iostream>
#include <string>

using namespace std;

int main() {
  string word1;
  string word2;
  string word3;
  cout << "Skriv inn tre ord" << endl;
  cout << "Ord 1: ";
  cin >> word1;
  cout << "Ord 2: ";
  cin >> word2;
  cout << "Ord 3: ";
  cin >> word3;

  string sentence = word1 + " " + word2 + " " + word3 + ".";
  cout << sentence << endl;

  cout << "Lengde av word1: " << word1.length() << endl;
  cout << "Lengde av word2: " << word2.length() << endl;
  cout << "Lengde av word3: " << word3.length() << endl;
  cout << "Lengde av setning: " << sentence.length() << endl;

  string sentence2 = sentence;
  for (size_t i = 9; i < 12; i++) {
    if (sentence2.length() >= i)
      sentence2[i] = 'x';
  }
  cout << "sentence: " << sentence << endl;
  cout << "sentence2: " << sentence2 << endl;

  string sentence_start = (sentence.length() > 5) ? sentence.substr(0, 5) : sentence.substr(0, sentence.length());
  cout << sentence << endl;
  cout << sentence_start << endl;

  string check_hello;
  (sentence.find("hello") != string::npos) ? check_hello = "Ja" : check_hello = "Nei";

  cout << "inneholder setningen 'hello'? " << check_hello << endl;

  int count = 0;
  size_t search = sentence.find("er");
  while (search != string::npos) {
    count++;
    search = sentence.find("er", search + 1);
  }

  cout << "'er' ble funnet " << count << " ganger" << endl;
}
