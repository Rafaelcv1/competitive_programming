#include <bits/stdc++.h>

using namespace std;

#define it long long
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  it n, k;
  cin >> n >> k;
  bool firstCase = true;
  while (n != 0) {
    if (!firstCase) {
      cout << '\n';
    }
    firstCase = false;
    vector<it> win(n + 1);
    vector<it> games(n + 1);
    for (int i = 0; i < k * n * (n - 1) / 2; i++) {
      it p1, p2;
      string pl1, pl2;
      cin >> p1 >> pl1 >> p2 >> pl2;
      if (pl1 == "rock" && pl2 == "scissors") win[p1]++;
      if (pl2 == "rock" && pl1 == "scissors") win[p2]++;
      if (pl1 == "scissors" && pl2 == "paper") win[p1]++;
      if (pl2 == "scissors" && pl1 == "paper") win[p2]++;
      if (pl1 == "paper" && pl2 == "rock") win[p1]++;
      if (pl2 == "paper" && pl1 == "rock") win[p2]++;

      if (pl1 != pl2) {
        games[p1]++;
        games[p2]++;
      }
    }
    for (it i = 0; i < n; i++) {
      if (games[i + 1] == 0) {
        cout << "-\n";
        continue;
      }
      cout << fixed << setprecision(3)
           << (double)win[i + 1] / (double)games[i + 1] << '\n';
    }
    cin >> n >> k;
  }
}
