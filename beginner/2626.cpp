// JB6 Team
#include <iostream>

#define pedra "pedra"
#define papel "papel"
#define tesoura "tesoura"

#define dstr "Os atributos dos monstros vao ser inteligencia, sabedoria..."
#define lstr "Iron Maiden's gonna get you, no matter how far!"
#define pstr "Urano perdeu algo muito precioso..."
#define tstr "Putz vei, o Leo ta demorando muito pra jogar..."

using namespace std;

bool beats(string s1, string s2) {
  if (s1==pedra && s2==tesoura)
    return true;
  if (s1==papel && s2==pedra)
    return true;
  if (s1==tesoura && s2==papel)
    return true;
  return false;
}

string solve(string d, string l, string p) {
  if (beats(d,l) && beats(d, p))
    return dstr;
  if (beats(l, d) && beats(l, p))
    return lstr;
  if (beats(p, d) && beats(p, l))
    return pstr;
  return tstr;
}

int main() {
  string d, l, p;
  while (cin >> d >> l >> p) {
    cout << solve(d, l, p) << '\n';
  }
  return 0;
}
