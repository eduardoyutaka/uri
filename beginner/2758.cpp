// Entrada e Saída de Números Reais
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float a, b;
  double c, d;
  cin >> a >> b;
  cin >> c >> d;
  cout << fixed << setprecision(6) << "A = " << a << ", B = " << b << '\n';
  cout << "C = " << c << ", D = " << d << '\n';
  cout << fixed << setprecision(1) << "A = " << a << ", B = " << b << '\n';
  cout << "C = " << c << ", D = " << d << '\n';
  cout << setprecision(2) << "A = " << a << ", B = " << b << '\n';
  cout << "C = " << c << ", D = " << d << '\n';
  cout << setprecision(3) << "A = " << a << ", B = " << b << '\n';
  cout << "C = " << c << ", D = " << d << '\n';
  cout << scientific << uppercase << "A = " << a << ", B = " << b << '\n';
  cout << "C = " << c << ", D = " << d << '\n';
  cout << fixed << setprecision(0) << "A = " << a << ", B = " << b << '\n';
  cout << "C = " << c << ", D = " << d << '\n';
  return 0;
}
