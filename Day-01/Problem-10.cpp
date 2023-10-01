//// https://atcoder.jp/contests/abc199/tasks/abc199_a

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    int v = pow(a,2) + pow(b,2);

    if(v<pow(c,2)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}