// Tempo do Duende
#include <iostream>

using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  if (A+B>N) {
    cout << "Deixa para amanha!";
  } else {
    cout << "Farei hoje!";
  }
  cout << '\n';
  return 0;
}
