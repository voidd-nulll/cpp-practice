//// https://atcoder.jp/contests/abc209/tasks/abc209_a

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    
    if(a>b) cout<<0<<endl;
    if(a==b) cout<<1<<endl;
    if(a<b) cout<<b-a+1<<endl;

    return 0;
}