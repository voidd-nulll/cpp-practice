//// https://atcoder.jp/contests/abc125/tasks/abc125_a

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a>c) cout<<0<<endl;
    else
    {
        int v = (c/a) * b;
        cout<<v<<endl;
    }
    
    return 0;
}