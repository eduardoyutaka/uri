// Leader's Impeachment
#include <iostream>

using namespace std;

int main() {
  int N;

  while (cin >> N) {
    double sum = 0;
    for (int i=0; i<N; ++i) {
      int v;
      cin >> v;
      sum += v;
    }

    if (sum >= (2.0/3.0) * N) {
      cout << "impeachment\n";
    } else {
      cout << "acusacao arquivada\n";
    }
  }
}
