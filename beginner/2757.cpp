// Entrada e Saída de Números Inteiros
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  cout << "A = " << A << ", B = " << B << ", C = " << C << '\n';
  cout << "A = " << setw(10) << A << ", B = " << setw(10) << B << ", C = " << setw(10) << C << '\n';
  cout << "A = " << setfill('0') << internal << setw(10) << A << ", B = " << setw(10) << B << ", C = " << setw(10) << C << '\n';
  cout << "A = " << setfill(' ') << left << setw(10) << A << ", B = " << setw(10) << B << ", C = " << setw(10) << C << '\n';
  return 0;
}
