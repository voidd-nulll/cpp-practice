//// https://codeforces.com/problemset/problem/1604/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        long long n;
        cin>>n;
        
        long long ar[n+1];
        
        for(int i=1; i<=n; i++) cin>>ar[i];
        
        long long cnt = 0;
        
        if(ar[1]>1) cnt = ar[1]-1;
        
        for(int i=2; i<=n; i++)
        {
            if(ar[i] > cnt+i)
            {
                long long v = ar[i] - (cnt+i);
                cnt+=v;
            }
        }
        cout<<cnt<<endl;
    }
    
    
    return 0;
}
