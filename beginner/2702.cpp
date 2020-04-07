// Escolha Difícil
#include <iostream>

using namespace std;

int main() {
  int Ca, Ba, Pa, Cr, Br, Pr;
  cin >> Ca >> Ba >> Pa; // cin => character input
  cin >> Cr >> Br >> Pr;

  int result = 0;
  if (Cr > Ca) {
    result += Cr - Ca;
  }

  if (Br > Ba) {
    result += Br - Ba;
  }

  if (Pr > Pa) {
    result += Pr - Pa;
  }

  cout << result << '\n';

  return 0;
}
