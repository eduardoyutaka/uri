// Pizza Before BH
#include <iostream>

using namespace std;

int solve(int mtx[][50], int d, int n) {
  for (int i=0; i<d; ++i) {
    bool flag = true;
    for (int j=0; j<n; ++j) {
      if (mtx[i][j]==0) {
        flag = false;
      }
    }
    if (flag) {
      return i;
    }
  }
  return -1;
}

int main() {
  int N, D;
  while (cin >> N >> D) {
    int people[50][50];
    char dates[50][50];
    for (int i=0; i<D; ++i) {
      cin >> dates[i];
      for (int j=0; j<N; ++j) {
        cin >> people[i][j];
      }
    }
    int date = solve(people, D, N);
    if (date!=-1) {
      cout << dates[date] << '\n';
    } else {
      cout << "Pizza antes de FdI\n";
    }
  }
  return 0;
}
