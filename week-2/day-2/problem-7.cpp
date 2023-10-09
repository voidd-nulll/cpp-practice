//// https://codeforces.com/problemset/problem/1692/B

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
        int fr[10007] = {0};
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            fr[a]++;
        }
        
        int sum = 0;
        
        for(int i=0; i<10007; i++)
        {
            if(fr[i]!=0) sum +=1;
        }
        
        if(n%2==0)
        {
            if(sum%2==0) cout<<sum<<endl;
            else cout<<sum-1<<endl;
        }
        else
        {
            if(sum%2==0) cout<<sum-1<<endl;
            else cout<<sum<<endl;
        }
    }    
    
    return 0;
}