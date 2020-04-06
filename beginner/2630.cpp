// Greyscale
#include <iostream>
#include <string>

using namespace std;

int min(int r, int g, int b) {
  int min = 255;
  if (r<min)
    min = r;
  if (g<min)
    min = g;
  if (b<min)
    min = b;
  return min;
}

int max(int r, int g, int b) {
  int max = 0;
  if (r>max)
    max = r;
  if (g>max)
    max = g;
  if (b>max)
    max=b;
  return max;
}

int mean(int r, int g, int b) {
  return (r+g+b) / 3;
}

int eye(int r, int g, int b) {
  return (0.30*r + 0.59*g + 0.11*b);
}

int main() {
  int T, R, G, B;
  string conversion;
  cin >> T;
  for (int i=1; i<T+1; ++i) {
    cin >> conversion >> R >> G >> B;
    cout << "Caso #" << i << ": ";
    if (conversion=="min")
      cout << min(R, G, B) << '\n';
    else if (conversion=="max")
      cout << max(R, G, B) << '\n';
    else if (conversion=="mean")
      cout << mean(R, G, B) << '\n';
    else if (conversion=="eye")
      cout << eye(R, G, B) << '\n';
  }
  return 0;
}
