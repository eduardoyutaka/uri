// Máquina de Café
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int A[3], f[3];
  cin >> A[0] >> A[1] >> A[2];
  f[0] = 2 * A[1] + 4*A[2];
  f[1] = 2 * (A[0] + A[2]);
  f[2] = 4 * A[0] + 2 * A[1];
  cout << *min_element(f, f+3) << '\n';
  return 0;
}
