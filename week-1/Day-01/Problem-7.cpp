//// https://atcoder.jp/contests/abc222/tasks/abc222_a

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int v = a;
    int d=0;

    while(a>0)
    {
        int b = a/10;
        a = b;
        d++;
    }
    
    if(v==0) cout<<0<<0<<0<<0<<endl;
    if(d==4) cout<<v<<endl;
    if(d==3) cout<<0<<v<<endl;
    if(d==2) cout<<0<<0<<v<<endl;
    if(d==1) cout<<0<<0<<0<<v<<endl;

    return 0;
}