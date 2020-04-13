// Entrada e Saída de String
#include <iostream>
#include <string>

using namespace std;

int main() {
  string str1, str2, str3;
  getline(cin, str1);
  getline(cin, str2);
  getline(cin, str3);
  cout << str1 << str2 << str3 << '\n';
  cout << str2 << str3 << str1 << '\n';
  cout << str3 << str1 << str2 << '\n';
  cout << str1.substr(0, 10) << str2.substr(0, 10) << str3.substr(0, 10) << '\n';
  return 0;
}
