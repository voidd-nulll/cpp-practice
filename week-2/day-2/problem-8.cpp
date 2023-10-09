//// https://codeforces.com/problemset/problem/1722/B

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
        
        string a,b;
        cin>>a>>b;
        
        bool flg = true;
        
        for(int i=0; i<n; i++)
        {
            if(a[i] == 'R' && b[i] != 'R') flg = false;
            if(b[i] == 'R' && a[i] != 'R') flg = false;
        }
        
        if(flg) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}