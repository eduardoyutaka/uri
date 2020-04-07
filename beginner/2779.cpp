// Álbum da Copa
#include <iostream>
#include <set>

using namespace std;

int main() {
  int N, M;
  set<int> X;
  cin >> N >> M;
  while (M--) {
    int tmp;
    cin >> tmp;
    X.insert(tmp);
  }
  cout << N-X.size() << '\n';
  return 0;
}
