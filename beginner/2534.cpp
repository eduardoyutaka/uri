// General Exam
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int i, int j) { return (i>j); }

int main() {
  int N, Q;
  while (cin >> N >> Q) {
    vector<int> p;
    for (int i=0; i<N; ++i) {
      int grade;
      cin >> grade;
      p.push_back(grade);
    }
    sort(p.begin(), p.end(), cmp);
    while (Q--) {
      int i;
      cin >> i;
      cout << p[i-1] << '\n';
    }
  }
  return 0;
}
