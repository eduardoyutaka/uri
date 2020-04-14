// Secret Chamber at Mount Rushmore
#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

map<char, set<char>> cipher;

bool canbecome(char ch1, char ch2, set<char> &checked) {
  if (checked.count(ch1) == 0) {
    checked.insert(ch1);
    if (ch1 == ch2) {
      return true;
    }
    if (cipher[ch1].count(ch2) != 0) {
      return true;
    }
    for (auto ch : cipher[ch1]) {
      if (checked.count(ch) == 0) {
        if (canbecome(ch, ch2, checked)) {
          return true;
        }
      }
    }
  }
  return false;
}

int main() {
  int m, n; cin >> m >> n;

  for (char c='a'; c<='z'; ++c) {
    cipher[c] = {};
  }

  while (m--) {
    char a, b; cin >> a >> b;
    cipher[a].insert(b);
  }

  while (n--) {
    string str1, str2; cin >> str1 >> str2;
    if (str1.size() != str2.size()) {
      cout << "no\n";
    } else {
      bool ans = true;
      for (int i=0; i<str1.size(); ++i) {
        set<char> checked = {};
        if (!canbecome(str1[i], str2[i], checked)) {
          ans = false;
        }
      }
      if (ans) {
        cout << "yes\n";
      } else {
        cout << "no\n";
      }
    }
  }

  return 0;
}
