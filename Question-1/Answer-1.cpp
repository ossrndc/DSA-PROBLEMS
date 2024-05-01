#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int arr[n];
    map<int,int> mp;
    for(int i{0}; i<n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int ans = 0;
    for(auto x:mp) ans+=x.second/3;
    cout << ans;
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