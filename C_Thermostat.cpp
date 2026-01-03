#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll L, R, X;
    cin >> L >> R >> X;
    ll P, Q;
    cin >> P >> Q;
    int moves = 0;
    
    while (P != Q) {
        if (moves > 3) {
            cout << -1 << '\n';
            return;
        }
        
        if (P < Q) {
            if (Q - P >= X) {
                cout << moves + 1 << '\n';
                return;
            }
            if (P - X < L) {
                P = min(P + X, R);
            } else {
                P -= X;
            }
        } else {
            if (P - Q >= X) {
                cout << moves + 1 << '\n';
                return;
            }
            if (P + X > R) {
                P = max(P - X, L);
            } else {
                P += X;
            }
        }
        moves++;
    }
    cout << moves << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
