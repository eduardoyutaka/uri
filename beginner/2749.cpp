/// Saída 3
#include <iostream>
#include <string>

using namespace std;

void println() {
  for (int i=0; i<39; ++i) {
    cout << '-';
  }
  cout << '\n';
}

void printstr(string str, int pos) {
  cout << '|';
  int current = 1;
  while (current<pos) {
    cout << ' ';
    ++current;
  }
  cout << str;
  current += str.size();
  for (int i=0; i<38-current; ++i) {
    cout << ' ';
  }
  cout << "|\n";
}

int main() {
  println();
  printstr("x = 35", 1);
  printstr("", 0);
  printstr("x = 35", 16);
  printstr("", 0);
  printstr("x = 35", 32);
  println();
  return 0;
}
