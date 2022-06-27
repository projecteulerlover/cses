#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    int64_t x, msf = LONG_MIN, c = 0;
    cin >> n;
    for (int i=0; i<n; ++i) {
        cin >> x;
        c = max(c+x, x);
        msf = max(c, msf);
    }
    cout << msf << '\n';
    return EXIT_SUCCESS;
}