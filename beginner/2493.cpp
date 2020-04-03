// Jogo do Operador
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

vector<string> sort(vector<string> v) {
  for (int i=0; i<v.size(); ++i) {
    for (int j=i+1; j<v.size(); ++j) {
      if (strcmp(v[j].c_str(), v[i].c_str()) < 0) {
        swap(v[j], v[i]);
      }
    }
  }

  return v;
}

int main() {
  int T;
  string line;

  while(scanf("%d", &T) != EOF) {
    int X, Y, Z;
    char ans[51];
    int count = 0;
    vector<string> losers;

    for (int i=0; i<50; ++i) {
      ans[i] = 'I';
    }

    for (int i=0; i<T; ++i) {
      scanf("%d %d=%d", &X, &Y, &Z);

      if (X+Y==Z) {
        ans[i] = '+';
      } else if (X-Y==Z) {
        ans[i] = '-';
      } else if (X*Y==Z) {
        ans[i] = '*';
      }
    }

    for (int i=0; i<T; ++i) { 
      int E;
      char N[51], R;

      scanf("%s %d %c", &N, &E, &R);

      if (R==ans[E-1]) {
        ++count;
      } else {
        losers.push_back(N);
      }
    }

    if (count==0) {
      cout << "None Shall Pass!" << endl;
    } else if (count==T) {
      cout << "You Shall All Pass!" << endl;
    } else {
      vector<string> sorted_losers = sort(losers);
      if (sorted_losers.size() == 1) {
        cout << sorted_losers[0] << endl;
      } else {
        for (int i=0; i<sorted_losers.size()-1; ++i) {
          cout << sorted_losers[i] << ' ';
        }

        cout << sorted_losers[sorted_losers.size()-1] << endl;
      }
    }
  }

  return 0;
}
