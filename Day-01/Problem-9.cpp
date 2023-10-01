//// https://codeforces.com/problemset/problem/633/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    bool res = false;
    
    for(int i=0; i<=100; i++)
    {
        int v = (c-(a*i));
        if(v<0) break;
        if(v%b==0) 
        { 
            res = true;
            break;
        }
    }

    if(res) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}