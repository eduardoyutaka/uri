// Escadinha
#include <iostream>

using namespace std;

int solve(int * ptr, int * end) {
  int cnt = 0;
  while (ptr<end-1) {
    int d1 = *(ptr+1) - *ptr;
    int d2 = *(ptr+2) - *(ptr+1);
    if (d1!=d2) {
      ++cnt;
    }
    ++ptr;
  }
  return cnt;
}

int main() {
  int N, seq[1000];
  cin >> N;
  if (N<3) return cout << 1 << '\n', 0;
  for (int i=0; i<N; ++i) {
    cin >> seq[i];
  }
  int prt = solve(seq, seq+N);
  cout << prt << endl;
  return 0;
}
