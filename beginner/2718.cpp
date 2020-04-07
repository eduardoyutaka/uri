// Luzes de Natal
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string dectobin(long long int dec) {
  string bin;
  while (dec != 0) {
    int rem = dec % 2;
    bin.insert(bin.begin(), '0' + rem);
    dec /= 2;
  }
  return bin;
}

const vector<string> explode(const string& s, const char& c) {
	string buff = "";
	vector<string> v;
	for(auto n : s) {
		if (n!=c) {
      buff+=n;
    } else if(n==c && buff!="") {
      v.push_back(buff);
      buff = "";
    }
	}
	if(buff != "") {
    v.push_back(buff);
  }
	return v;
}

int main() {
  int N;
  cin >> N;
  while (N--) {
    long long int X;
    cin >> X;
    string bin = dectobin(X);
    vector<string> sequences = explode(bin, '0');
    int size = 0;
    for (auto seq : sequences) {
      if (seq.size() > size) size = seq.size();
    }
    cout << size << '\n';
  }
  return 0;
}
