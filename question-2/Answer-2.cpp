#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int trailing_zeros = 0;
    for(int i{5}; i<=n; i*=5) trailing_zeros+=n/i;
    cout << trailing_zeros; 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}