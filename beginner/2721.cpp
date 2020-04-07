// Indecisão das Renas
#include <iostream>
#include <string>

using namespace std;

string renas[9] = { "Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph" };

int main() {
  int acc = 0;
  for (int i=0; i<9; ++i) {
    int tmp;
    cin >> tmp;
    acc += tmp;
  }
  
  cout << renas[(acc-1) % 9] << '\n'; 
  return 0;
}
