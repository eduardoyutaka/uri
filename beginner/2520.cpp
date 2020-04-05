// The Last Analógimôn
#include <iostream>
#include <utility>
#include <cmath>

using namespace std;

int main() {
  int N, M, pos;
  pair<int, int> player, anal;

  while (cin >> N >> M) {
    for (int i=0; i<N; ++i) {
      for (int j=0; j<M; ++j) {
        cin >> pos;
        if (pos==1) {
          player.first = i;
          player.second = j;
        } else if (pos==2) {
          anal.first = i;
          anal.second = j;
        }
      }
    }

    int time = abs(player.first - anal.first) + abs(player.second - anal.second);
    cout << time << endl;
  }

  return 0;
}
