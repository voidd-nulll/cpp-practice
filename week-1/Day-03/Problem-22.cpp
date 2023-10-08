//// https://codeforces.com/problemset/problem/440/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n;
    cin>>n;
        
    long long a[n];
        
    for(int i=0; i<n-1; i++) cin>>a[i];
    
    sort(a,a+n-1);
        
    for(int i=0; i<n; i++)
    {
        if(a[i]!=i+1)
        {
            cout<<i+1<<endl;
            break;
        }   
    }
    
    return 0;
}