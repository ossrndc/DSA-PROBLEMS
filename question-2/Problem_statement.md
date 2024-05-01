```                           
                            Shabd's Animal Ticket
                            Time limit: 1.00 s
                            Memory limit: 512 MB
  ```

After watching the trailer of the animal movie, Shabd eagerly awaited the first day, first show. When the movie was released, Shabd headed to the theater alone. After waiting in line for a long time for a ticket, he noticed that the SBI bank server had gone down, preventing him from paying online. Additionally, he didn't have enough cash to buy a ticket. Shabd requested the ticket counter attendant to grant him a ticket, promising to pay once the bank's services resumed. However, the attendant regretfully declined, stating that it was out of his hands.

Unbeknownst to Shabd, his college professor overheard the entire conversation and noticed his sad expression. Approaching Shabd, the professor said, "I will pay for you if you able to solve this problem".

can you help shabd to get movie ticket?
Shabd task is to calculate the number of trailing zeros in the factorial n!.
**Example** : 20! = 2432902008176640000 and it has 4 trailing zeros.
**Input**
The first input line contain number of test cases **t** (1≤t≤10^5).
The second  input line has an integer n  (1≤n≤10^6).
**Output**
Print the number of trailing zeros in n!.
**Input**

  

    5
    
    20
    24
    4
    5
    7

**Output**

    4
    4
    0
    1
    1
    
my code


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