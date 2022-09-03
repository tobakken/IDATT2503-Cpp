#include <cstring>
#include <iostream>

using namespace std;

int find_sum(const int *table, int length);

int main() {

  // OPPGAVE 1
  //  int med verdi 3 blir lagret i minnet et sted
  int i = 3;
  // int med verdi 5 blir lagret i minnet et sted
  int j = 5;

  // pekeren p peker til minnelokasjonen til i
  int *p = &i;
  // pekeren q peker til minnelokasjonen til j
  int *q = &j;
  cout << i << " Er lagret i minnet på: " << &i << endl;
  cout << j << " Er lagret i minnet på: " << &j << endl;
  cout << "*p = " << *p << " som peker til minnelokasjonen " << p << endl;
  cout << "*q = " << *q << " som peker til minnelokasjonen " << q << endl;

  // Kjører vi programmet ser vi at p og q peker til samme minnelokasjon som i og j er lagret som stemmer med det jeg trodde på forhånd.

  // minnelokasjonen p peker til settes nå til å holde på en ny int med verdi 7.
  *p = 7;

  // minnelokasjonen q legger til 4 på verdien den peker til, ny verdi blir altså 9
  *q += 4;
  // q settes nå til å peke til verdien av p + 1 som blir 8
  *q = *p + 1;
  // p settes lik q, begge peker til samme minnelokasjon
  p = q;
  cout << *p << " " << *q << endl;
  cout << "\n Etter endring" << endl;
  cout << i << " Er lagret i minnet på: " << &i << endl;
  cout << j << " Er lagret i minnet på: " << &j << endl;
  cout << "*p = " << *p << " som peker til minnelokasjonen " << p << endl;
  cout << "*q = " << *q << " som peker til minnelokasjonen " << q << endl;

  // OPPGAVE 4
  int a = 5;
  // deklarasjon av en referanse uten at det referer til en variabel går ikke an.
  int &b = a;
  int *c;
  c = &b;
  // a er en variabel og kan ikke dereferes
  // b er en referanse og trenger ikke dereferes
  a = b + *c;
  // b er en minnelokasjon og kan ikke settes
  b = 2;

  // OPPGAVE 5
  double number;
  double *pointer = &number;
  double &ref = number;
  number = 1;
  *pointer = 2;
  ref = 3;

  cout << number << endl;

  // OPPGAVE 6
  int table[20];
  for (int i = 0; i < 20; i++) {
    table[i] = i + 1;
  }
  cout << find_sum(table, 10) << endl;
  int *tablepointer = &table[10];
  cout << find_sum(tablepointer, 5) << endl;
  cout << find_sum(&table[15], 5) << endl;
}

int find_sum(const int *table, int length) {
  int sum = 0;
  for (int i = 0; i < length; ++i) {
    sum += *table;
    table++;
  }

  return sum;
}
