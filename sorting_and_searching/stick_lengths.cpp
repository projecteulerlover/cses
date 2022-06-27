#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int64_t> ps(n);
    int64_t t = 0, c = 0, msf = LONG_MAX;
    
    for (int i=0; i<n; ++i) {
        cin >> ps[i];
        t += ps[i];
    }
    sort(ps.begin(), ps.end());
    for (int i=0; i<n; ++i) {
        msf = min(msf, t - 2 * c - (ps[i] * (n - 2 * i)));
        c += ps[i];
    }
    
    cout << msf << '\n';
    return EXIT_SUCCESS;
}