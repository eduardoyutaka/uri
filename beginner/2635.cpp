// Navegador Web
#include <iostream>
#include <cstring>

using namespace std;

int main() {
  int N, Q, maxlen, cnt;
  char words[1000][101];
  char query[101];
  cin >> N;
  for (int i=0; i<N; ++i) {
    cin >> words[i];
  }
  cin >> Q;
  for (int i=0; i<Q; ++i) {
    maxlen = cnt = 0;
    cin >> query;
    for (int j=0; j<N; ++j) {
      char * pch;
      pch = strstr(words[j], query);
      if (pch==words[j]) {
        if (strlen(words[j])>maxlen) {
          maxlen = strlen(words[j]);
        }
        ++cnt;
      }
    }
    if (cnt) {
      cout << cnt << ' ' << maxlen << '\n';
    } else {
      cout << -1 << '\n';
    }
  }
  return 0;
}
