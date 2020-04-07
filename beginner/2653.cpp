// Djikstra
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
  set<string> treasure;
  string line;
  while (getline(cin, line)) {
    treasure.insert(line);
  }
  cout << treasure.size() << '\n';
  return 0;
}
