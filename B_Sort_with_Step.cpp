#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        int c = 0;
        for(int i = 0; i < n; i++)
            if(abs(a[i] - (i + 1)) % k != 0) c++;
        if(c == 0) cout << 0 << "\n";
        else if(c == 2) cout << 1 << "\n";
        else cout << -1 << "\n";
    }
    return 0;
}
