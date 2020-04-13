// Festa
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, M, K;
  while (cin >> N >> M >> K) {
    vector<bool> men(100001, false), women(100001, false);
    vector<int> pairs(100000, 0);
    for (int i=0; i<N; ++i) {
      int a; cin >> a;
      ++pairs[a % K];
    }
    long long ans = 0;
    for (int i=0; i<M; ++i) {
      int b; cin >> b;
      ans += pairs[(K - (b % K)) % K];
    }
    cout << ans << '\n';
  }
  return 0;
}
