// Entrada e Saída com Vírgula
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
  string str;
  getline(cin, str);
  char cstr[str.length()+1];
  strcpy(cstr, str.c_str());
  char * pch = strtok(cstr, ",");
  while (pch != NULL) {
    cout << pch << '\n';
    pch = strtok(NULL, ",");
  }
  return 0;
}
