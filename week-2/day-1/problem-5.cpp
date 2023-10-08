//// https://codeforces.com/problemset/problem/1669/B


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        int a[n];
        
        for(int i=0; i<n; i++) cin>>a[i];
        
        sort(a, a+n);
        
        int cnt = 0;
        int m = 0;
        
        bool flg = true;
        
        for(int i=0; i<n-1; i++)
        {
            if(a[i]==a[i+1])
            {
                cnt++;
                if(cnt==2)
                {
                    cout<<a[i]<<endl;
                    flg = false;
                    break;
                }
            }
            else cnt = 0;
        }
        
        if(flg) cout<<-1<<endl;
    }

    return 0;
}