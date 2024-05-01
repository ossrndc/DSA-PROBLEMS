#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>

using namespace std;
const int N = 110;
int n, t;
int st[N];


int main()
{
    cin >> t;
    while(t--)
    {
        cin >> n;
        int cnt = 0;
        memset(st, 0, sizeof st);
        for(int i=1; i<=n; i++)
        {
            int a ;
            cin >> a;
            st[a]++;
            if(st[a]==3)
            {
                st[a] = 0;
                cnt++;
            }
        }
        cout << cnt<<endl;
    }
    return 0;
}
