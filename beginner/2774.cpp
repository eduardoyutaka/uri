// Precisão do Sensor
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

int main() {
  int h, m;
  string str;
  while (getline(cin, str)) {
    int t = 0;
    vector<double> x;
    int i = 0;
    getline(cin, str);
    stringstream ss(str);
    double xi;
    while (ss >> xi) {
      x.push_back(xi);
    }
    double acc = accumulate(x.begin(), x.end(), 0.0);
    double mean = acc / x.size();
    double sumdiff = 0;
    for (int j=0; j<x.size(); ++j) {
      sumdiff += pow((x[j]-mean), 2.0);
    }
    double ans = sqrt((sumdiff/(x.size()-1)));
    cout << fixed << setprecision(5) << ans << '\n';
  }
  return 0;
}
