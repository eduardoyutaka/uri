// Will's Message
#include <iostream>

using namespace std;

int main() {
  int N, bulbnum;
  char transform[27];

  while (cin >> transform) {
    cin >> N;
    while (N--) {
      cin >> bulbnum;
      cout << transform[bulbnum-1];
    }
    cout << endl;
  }

  return 0;
}
