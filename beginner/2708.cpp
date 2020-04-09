// Turistas no Parque Huacachina
#include <iostream>
#include <string>

using namespace std;

int main() {
  int T, salida = 0, vuelta = 0, jipes = 0;
  string str;
  cin >> str;
  while (str.compare("ABEND")!=0) {
    cin >> T;
    if (str.compare("SALIDA")==0) {
      salida += T;
      ++jipes;
    } else {
      vuelta += T;
      --jipes;
    }
    cin >> str;
  }
  cout << (salida-vuelta) << endl;
  cout << jipes << endl;
  return 0;
}
