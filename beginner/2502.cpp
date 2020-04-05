// Decifrando a Carta Criptografada
#include <iostream>
#include <string>
#include <sstream>
#include <ctype.h>
#include <utility>

using namespace std;

bool isspecial(char c) {
  if (c<'A')
    return true;
  if (c>'Z' && c<'a')
    return true;
  if (c>'z')
    return true;
  return false;
}

int main() {
  int C, N;
  string str;
  pair<string, string> cipher;
  int transform[20];
  string sentence;

  while (getline(cin, str)) {
    stringstream(str) >> C >> N;
    getline(cin, cipher.first);
    getline(cin, cipher.second);

    for (int i=0; i<C; ++i) {
      transform[i] = cipher.first[i] - cipher.second[i];
    }

    for (int i=0; i<N; ++i) {
      getline(cin, sentence);
      for (int j=0; j<sentence.length(); ++j) {
        char c = sentence[j];
        size_t cf = cipher.first.find(toupper(c));
        size_t cs = cipher.second.find(toupper(c));
        if (cs!=string::npos) {
          if (isspecial(cipher.second[cs]) && !isspecial(cipher.first[cs])) {
            sentence[j] = toupper(c) + transform[cs] + 32;
          } else if (!isspecial(cipher.second[cs]) && isspecial(cipher.first[cs])) {
            sentence[j] = toupper(c) + transform[cs];
          } else {
            sentence[j] = sentence[j] + transform[cs];
          }
        }

        if (cf!=string::npos) {
          if (isspecial(cipher.first[cf]) && !isspecial(cipher.second[cf])) {
            sentence[j] = toupper(c) - transform[cf] + 32;
          } else if (!isspecial(cipher.first[cf]) && isspecial(cipher.second[cf])) {
            sentence[j] = toupper(c) - transform[cf];
          } else {
            sentence[j] = sentence[j] - transform[cf];
          }
        }
      }
      cout << sentence << '\n';
    }
    cout << '\n';
  }

  return 0;
}
