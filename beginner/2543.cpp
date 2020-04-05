// UFPR Gaming
#include <iostream>

using namespace std;

int main() {
  int N, I;
  while (cin >> N >> I) {
    int cnt = 0;
    while (N--) {
      int i, j;
      cin >> i >> j;
      if (I==i && j==0) {
        ++cnt;
      }
    }
    cout << cnt << '\n';
  }
  return 0;
}
