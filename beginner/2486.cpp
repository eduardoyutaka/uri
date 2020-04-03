// C Main ou Menos?
#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> vitamina = {
  { " suco de laranja", 120 },
  { " morango fresco", 85 },
  { " mamao", 85 },
  { " goiaba vermelha", 70 },
  { " manga", 56 },
  { " laranja", 50 },
  { " brocolis", 34}
};

int main() {
  int T, N;

  cin >> T;
  while (T != 0) {
    int sum = 0;
    for (int i = 0; i < T; ++i) {
      string alimento;

      cin >> N;
      getline(cin, alimento);

      sum += N * vitamina[alimento];
    }

    if (sum < 110) {
      cout << "Mais " << (110 - sum) << " mg" << endl;
    } else if (sum > 130) {
      cout << "Menos " << (sum - 130) << " mg" << endl;
    } else {
      cout << sum << " mg" << endl;
    }

    cin >> T;
  }

  return 0;
}
