// Entrada e Saída de Data
#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str[9];
  cin >> str;
  char * str1 = strtok(str, "/");
  char * str2 = strtok(NULL, "/");
  char * str3 = strtok(NULL, "/");
  cout << str2 << '/' << str1 << '/' << str3 << '\n';
  cout << str3 << '/' << str2 << '/' << str1 << '\n';
  cout << str1 << '-' << str2 << '-' << str3 << '\n';
  return 0;
}
