// Saída 2
#include <iostream>
#include <string>

using namespace std;

void printline() {
  for (int i=0; i<39; ++i) {
    cout << '-';
  }
  cout << '\n';
}

void printbars() {
  cout << '|';
  for (int i=0; i<37; ++i) {
    cout << ' ';
  }
  cout << '|';
  cout << '\n';
}

void printtext(string str) {
  cout << '|';
  for (int i=0; i<8; ++i) {
    cout << ' ';
  }
  cout << str;
  for (int i=9+str.length(); i<38; ++i) {
    cout << ' ';
  }
  cout << '|';
  cout << '\n';
}

int main() {
  printline();
  printtext("Roberto");
  printbars();
  printtext("5786");
  printbars();
  printtext("UNIFEI");
  printline();
  return 0;
}
