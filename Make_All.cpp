#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N; 
    if(!(cin>>N)) return 0;
    vector<long long> a; a.reserve(20);
    if(N==20){
        for(int i=1;i<=10;i++) a.push_back(i);
        for(int i=1;i<=10;i++) a.push_back(i);
    }else{
        long long v=1;
        for(int i=0;i<10;i++){
            a.push_back(v);
            a.push_back(2*v);
            v*=3;
        }
    }
    for(int i=0;i<20;i++){ if(i) cout<<' '; cout<<a[i]; }
    cout<<'\n';
    return 0;
}
