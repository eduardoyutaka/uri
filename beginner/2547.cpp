// Roller Coaster
#include <iostream>

using namespace std;

int main() {
  int N, AMIN, AMAX;
  while (cin >> N >> AMIN >> AMAX) {
    int cnt = 0;
    while (N--) {
      int a;
      cin >> a;
      if (a>=AMIN && a<=AMAX)
        ++cnt;
    }
    cout << cnt << '\n';
  }
  return 0;
}
