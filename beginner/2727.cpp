// Código Secreto
#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

char translate(char str[]) {
  char c = 'a';
  char * pch;
  pch = strtok(str, " ");
  if (strcmp(pch, ".") == 0) {
    c += 0;
  } else if (strcmp(pch, "..") == 0) {
    c += 1;
  } else {
    c += 2;
  }
  while (pch != NULL) {
    c += 3;
    pch = strtok(NULL, " ");
  }
  c -= 3;
  return c;
}

int main() {
  int N;
  string line;
  while (getline(cin, line)) {
    stringstream(line) >> N;
    for (int i=0; i<N; ++i) {
      char letter[100];
      getline(cin, line);
      for (int i=0; i<line.size(); ++i) {
        letter[i] = line[i];
      }
      letter[line.size()] = '\0';
      cout << translate(letter) << endl;
    }
  }
  return 0;
}
