#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve() {
    int n,s; cin>>n>>s;
    vector<int> a(n);
    for(int &x:a) cin>>x;
    sort(a.begin(),a.end());
    int idx=0;
    for(int val=1; val<=100; val++) {
        if(s==0 && idx>=n) {
            cout<<"YES\n";
            return;
        }
        if(s<0) {
            cout<<"NO\n";
            return;
        }
        if(idx<n && a[idx]==val) idx++;
        else s-=val;
    }
    cout<<(s>=0 && idx>=n ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--) solve();
}
