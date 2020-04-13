// Secret Chamber at Mount Rushmore
#include <iostream>
#include <map>
#include <utility>
#include <cstring>

using namespace std;

map<char, char> trans;

bool match(char ch1, char ch2) {
  bool res = true;
  if (ch1==ch2) {
    return true;
  } else {
    for (int i=0; i<trans.size(); ++i) {
      try {
        ch1 = trans.at(ch1);
      } catch (const out_of_range& oor) {
        return false;
      }
      if (ch1==ch2) {
        return true;
      }
    }
    return false;
  }
}

bool solve(char fi[], char se[]) {
  for (int i=0; i<strlen(fi); ++i) {
    if (!match(fi[i], se[i])) {
      return false;
    }
  }
  return true;
}

int main() {
  int m, n;
  pair<char[50], char[50]> words;
  cin >> m >> n;
  for (int i=0; i<m; ++i) {
    char a, b;
    cin >> a >> b;
    trans[a] = b;
  }
  for (int i=0; i<n; ++i) {
    cin >> words.first >> words.second;
    if (solve(words.first, words.second)) {
      cout << "yes\n";
    } else {
      cout << "no\n";
    }
  }
  return 0;
}
