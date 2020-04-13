// Entrada e Saída Lendo e Pulando Nomes
#include <iostream>

using namespace std;

int main() {
  char str[31];
  for (int i=1; i<=10; ++i) {
    cin >> str;
    if (i==3 || i==7 || i==9) {
      cout << str << '\n';
    }
  }
  return 0;
}
