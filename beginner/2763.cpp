// Entrada e Saída de CPF
#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str[15];
  cin >> str;
  char * pch = strtok(str, ".-");
  while (pch != NULL) {
    cout << pch << '\n';
    pch = strtok(NULL, ".-");
  }
  return 0;
}
