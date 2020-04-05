// System of a Download
#include <iostream>
#include <map>

using namespace std;

map<int, string> album = {
  { 0, "PROXYCITY" },
  { 1, "P.Y.N.G." },
  { 2, "DNSUEY!" },
  { 3, "SERVERS" },
  { 4, "HOST!" },
  { 5, "CRIPTONIZE" },
  { 6, "OFFLINE DAY" },
  { 7, "SALT" },
  { 8, "ANSWER!" },
  { 9, "RAR?" },
  { 10, "WIFI ANTENNAS" }
};

int main() {
  int C, X, Y;
  cin >> C;
  while (C--) {
    cin >> X >> Y;
    cout << album[X+Y] << '\n';
  }
  return 0;
}
