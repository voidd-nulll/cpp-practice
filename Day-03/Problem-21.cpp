//// https://codeforces.com/contest/621/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n;
    cin>>n;
        
    long long a[n];
        
    for(int i=0; i<n; i++) cin>>a[i];
        
    long long sum = 0;
    long long cnt = 0;
    long long b = 0;
    
    sort(a,a+n,greater<int>());
        
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0) sum += a[i];
        else
        {
            cnt++;
            if(cnt%2==0)
            {
                sum += a[i]+b;
                continue;
            }
            b = a[i];
        }
    }
    
    cout<<sum<<endl;
    
    
    return 0;
}