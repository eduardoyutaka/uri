// A Mudança
#include <iostream>

using namespace std;

int main() {
  int m;
  while (cin >> m) {
    int rem = m % 360;
    if (rem < 90) {
      cout << "Bom Dia!!\n";
    } else if (rem < 180) {
      cout << "Boa Tarde!!\n";
    } else if (rem < 270) {
      cout << "Boa Noite!!\n";
    } else {
      cout << "De Madrugada!!\n";
    }
  }
  return 0;
}
