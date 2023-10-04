//// https://www.spoj.com/problems/INTEST/en/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n,k;
    cin>>n>>k;
    
    long long cnt = 0;
    
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a%k==0) cnt++;
    }
    
    cout<<cnt<<endl;
    
    return 0;
}