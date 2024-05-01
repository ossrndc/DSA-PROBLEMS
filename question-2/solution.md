**Solution**
 #include<bits/stdc++.h>
 
 using namespace std;

 int main(){

    int t;

    cin>>t;

    while(t--){

        int n;

        cin>>n;

        int ans=0;

        for (int i = 5; n / i >= 1; i *= 5){

        zeros += n / i;

    }

    cout<<zeros<<endl;

    }

      return 0;

    }
 

