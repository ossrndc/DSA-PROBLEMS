**Solution**
 #include<bits/stdc++.h>
  using namespace std;
  int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> sticks(n);
        for(int i=0;i<n;i++){
            cin>>sticks[i];
        }
        sort(sticks.begin(), sticks.end(), greater<int>());
        int ans = 0;
        int count = 0;

        for (int i = 0; i < n - 1; i++) {
            if (sticks[i] == sticks[i + 1]) {
                count++;
                if (count >= 3) {
                    ans++;
                    count = 0;
                }
            } else {
                count = 0;
            }
        }

        cout << ans << endl;
    }

    return 0;
}