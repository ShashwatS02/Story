#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
const ll MOD = 1e9 + 7;
const ll INF = 2e18;
const ll MAXN = 1e5 + 10;

void solve() {
    ll n, m;
    cin >> n >> m;
    vll range(n + 1, n + 1);
    for (ll i = 0; i < m; ++i) {
        ll x, y;
        cin >> x >> y;
        if (x > y) swap(x, y);
        range[x] = min(range[x], y);
    }
    ll res = 0, rightmost = n + 1;
    for (ll i = n; i >= 1; --i) {
        rightmost = min(rightmost, range[i]);
        res += rightmost - i;
    }
    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
