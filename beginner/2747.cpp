// Saída 1
#include <iostream>

using namespace std;

int main() {
  for (int i=0; i<39; ++i) {
    cout << '-';
  }
  cout << '\n';
  for (int i=0; i<5; ++i) {
    cout <<  '|';
    for (int j=0; j<37; ++j) {
      cout << ' ';
    }
    cout << '|';
    cout << '\n';
  }
  for (int i=0; i<39; ++i) {
    cout << '-';
  }
  cout << '\n';
  return 0;
}
