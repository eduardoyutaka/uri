// New Record
#include <iostream>

using namespace std;

int main() {
  int N;
  while (cin >> N) {
    double maxspeed = 0;
    for (int i=0; i<N; ++i) {
      double t, d;
      cin >> t >> d;
      double speed = d / t;
      if (speed>maxspeed) {
        maxspeed = speed;
        cout << (i+1) << '\n';
      }
    }
  }
  return 0;
}
