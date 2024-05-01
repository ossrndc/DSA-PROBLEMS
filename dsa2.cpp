#include <bits/stdc++.h>
using namespace std;
 void  traillingzeros()
 {
     int n;
       cin>>n;
    if(n>=1&&n<=1000000)
    {
        int tz;
        tz=n/5;
        cout<<tz;
    }
    cout<<"\n";
 }
 int main()
 {
         int t;
         cin>>t;
         if(t>=1&&t<=100000)
         {
              for(int i=1;i<=t;i++)
              {
                  traillingzeros();
              }
         }
     
 }