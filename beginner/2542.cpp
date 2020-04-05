// Iu-Di-Oh!
#include <iostream>

using namespace std;

int main() {
  int N, M, L;
  while (cin >> N) {
    int mdeck[100][100], ldeck[100][100];
    cin >> M >> L;
    for (int i=0; i<M; ++i) {
      for (int j=0; j<N; ++j) {
        cin >> mdeck[i][j];
      }
    }
    for (int i=0; i<L; ++i) {
      for (int j=0; j<N; ++j) {
        cin >> ldeck[i][j];
      }
    }
    int mcard, lcard, attr;
    cin >> mcard >> lcard >> attr;
    if (mdeck[mcard-1][attr-1]>ldeck[lcard-1][attr-1]) {
      cout << "Marcos\n";
    } else if (mdeck[mcard-1][attr-1]<ldeck[lcard-1][attr-1]) {
      cout << "Leonardo\n";
    } else {
      cout << "Empate\n";
    }
  }
  return 0;
}
