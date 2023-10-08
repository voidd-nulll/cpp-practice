//// https://codeforces.com/problemset/problem/1676/B


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            mn = min(mn, a);
            sum += a;
        }
        
        int val = sum - (n*mn);
        
        cout<<val<<endl;
    }    
    
    return 0;
}