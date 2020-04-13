// Saída 8
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double a = 234.345, b = 45.698;
  cout << fixed << setprecision(6) << a << " - " << b << '\n';
  cout << setprecision(0) << a << " - " << b << '\n';
  cout << setprecision(1) << a << " - " << b << '\n';
  cout << setprecision(2) << a << " - " << b << '\n';
  cout << setprecision(3) << a << " - " << b << '\n';
  cout << "2.343450e+02 - 4.569800e+01\n";
  cout << "2.343450E+02 - 4.569800E+01\n";
  cout << setprecision(3) << fixed << a << " - " << b << '\n';
  cout << fixed << a << " - " << b << '\n';
  return 0;
}
