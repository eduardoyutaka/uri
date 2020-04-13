// Entrada e Saída 6
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
  string str;
  getline(cin, str);
  size_t found = str.find('.');
  stringstream ss1(str.substr(0, found)), ss2(str.substr(found+1));
  int x, y;
  ss1 >> x;
  ss2 >> y;
  cout << y << '.' << x << '\n';
  return 0;
}
