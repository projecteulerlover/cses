#include <bits/stdc++.h>

using namespace std;

int n, x;
vector<int> cs;

int solve() {
  unordered_set<int> dp = {0};
  for (int i = 1; i <= x; ++i) {
    unordered_set<int> next_dp = dp;
    for (int c : cs)
      for (int d : dp) {
        if (c + d == x) return i;
        if (c + d < x) next_dp.insert(c + d);
      }
    swap(dp, next_dp);
  }
  return -1;
}

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);

  cin >> n >> x;
  cs.clear();
  for (int i = 0, j; i < n; ++i) {
    cin >> j;
    cs.push_back(j);
  }
  sort(cs.begin(), cs.end());
  cout << solve() << '\n';

  return EXIT_SUCCESS;
}
