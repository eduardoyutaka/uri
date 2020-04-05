// CheeseBreadSweeper
#include <iostream>

using namespace std;

int solve(int mtx[][100], int i, int j, int m, int n) {
  if (mtx[i][j])
    return 9;
  int res = 0;
  if (i==0 && m==1) {
    ;
  } else if (i==0 && m>1) {
    res += mtx[i+1][j];
  } else if (i==m-1 && m>1) {
    res += mtx[i-1][j];
  } else {
    res += mtx[i+1][j] + mtx[i-1][j];
  }
  if (j==0 && n==1) {
    ;
  } else if (j==0 && n>1) {
    res += mtx[i][j+1];
  } else if (j==n-1 && n>1) {
    res += mtx[i][j-1];
  } else {
    res += mtx[i][j+1] + mtx[i][j-1];
  }
  return res;
}

int main() {
  int N, M;
  while (cin >> N >> M) {
    int board[100][100] = {};
    for (int i=0; i<N; ++i) {
      for (int j=0; j<M; ++j) {
        cin >> board[i][j];
      }
    }
    for (int i=0; i<N; ++i) {
      for (int j=0; j<M; ++j) {
        cout << solve(board, i, j, N, M);
      }
      cout << '\n';
    }
  }
  return 0;
}
