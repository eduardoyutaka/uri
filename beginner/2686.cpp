// A Mudança Continua!!
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct mytime {
  int hours, minutes, seconds;
} mytime;

void ticktotime(double ticks) {
  int totalseconds = ticks * 24 * 60 * 60 / 360;
  mytime.hours = totalseconds / 3600;
  totalseconds %= 3600;
  mytime.minutes = totalseconds / 60;
  totalseconds %= 60;
  mytime.seconds = totalseconds;
}


int main() {
  double m;
  while (cin >> m) {
    int rem = (int) m % 360;
    ticktotime(m);
    if (rem < 90) {
      cout << "Bom Dia!!\n";
    } else if (rem < 180) {
      cout << "Boa Tarde!!\n";
    } else if (rem < 270) {
      cout << "Boa Noite!!\n";
    } else {
      cout << "De Madrugada!!\n";
    }
    cout << setw(2) << setfill('0') << (6+mytime.hours) % 24 << ':' << setw(2) << setfill('0') << mytime.minutes << ':' << setw(2) << setfill('0') << mytime.seconds << '\n';
  }
  return 0;
}
