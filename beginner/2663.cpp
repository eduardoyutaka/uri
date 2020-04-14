// Fase
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, k; cin >> n >> k;
  vector<int> v(n, 0);
  for (int i=0; i<n; ++i) {
    cin >> v[i];
  }
  sort(v.begin(), v.end(), [](int i, int j) -> bool { return i>j; });
  while (k<v.size() && v[k-1] == v[k]) {
    ++k;
  }
  cout << k << '\n';
  return 0;
}
