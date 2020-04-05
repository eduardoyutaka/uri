// Internship
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int M;
  double N, C;

  while (cin >> M) {
    double dividend = 0, divisor = 0;
    while (M--) {
      cin >> N >> C;
      dividend += N * C;
      divisor += 100 * C;
    }
    cout << setprecision(4) << fixed << dividend / divisor << endl;
  }

  return 0;
}
