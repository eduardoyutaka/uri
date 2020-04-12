// Saída 4
#include <iostream>
#include <string>

using namespace std;

void println() {
  for (int i=0; i<39; ++i) {
    cout << '-';
  }
  cout << '\n';
}

void printrow(string str1, int pos1, string str2, int pos2, string str3, int pos3) {
  cout << '|';
  int current = 1;
  while (current<pos1) {
    cout << ' ';
    ++current;
  }
  cout << str1;
  current += str1.size();
  while (current<12) {
    cout << ' ';
    ++current;
  }
  cout << '|';
  ++current;
  while (current<pos2) {
    cout << ' ';
    ++current;
  }
  cout << str2;
  current += str2.size();
  while (current<22) {
    cout << ' ';
    ++current;
  }
  cout << '|';
  ++current;
  while (current<pos3) {
    cout << ' ';
    ++current;
  }
  cout << str3;
  current += str3.size();
  while (current<38) {
    cout << ' ';
    ++current;
  }
  cout << "|\n";
}

int main() {
  println();
  printrow("decimal", 3, "octal", 15, "Hexadecimal", 25);
  println();
  printrow("0", 7, "0", 17, "0", 30);
  printrow("1", 7, "1", 17, "1", 30);
  printrow("2", 7, "2", 17, "2", 30);
  printrow("3", 7, "3", 17, "3", 30);
  printrow("4", 7, "4", 17, "4", 30);
  printrow("5", 7, "5", 17, "5", 30);
  printrow("6", 7, "6", 17, "6", 30);
  printrow("7", 7, "7", 17, "7", 30);
  printrow("8", 7, "10", 16, "8", 30);
  printrow("9", 7, "11", 16, "9", 30);
  printrow("10", 6, "12", 16, "A", 30);
  printrow("11", 6, "13", 16, "B", 30);
  printrow("12", 6, "14", 16, "C", 30);
  printrow("13", 6, "15", 16, "D", 30);
  printrow("14", 6, "16", 16, "E", 30);
  printrow("15", 6, "17", 16, "F", 30);
  println();
  return 0;
}
