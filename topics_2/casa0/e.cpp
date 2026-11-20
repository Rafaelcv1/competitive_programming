#include <bits/stdc++.h>

#include <iomanip>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    double c;
    double d;
    cin >> c >> d;
    c = c * 9.0 / 5.0 + 32;
    c += d;
    c = (c - 32) * 5.0 / 9.0;
    cout << "Case " << i + 1 << ": " << fixed << setprecision(2) << c << endl;
  }
  return 0;
}
