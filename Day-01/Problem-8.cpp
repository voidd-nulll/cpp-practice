//// https://atcoder.jp/contests/abc220/tasks/abc220_a

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    int v = -1;
    
    for(int i=a; i<=b; i++)
    {
        if(i%c==0)
        {
            v = i;
            break;
        }
    }
    
    cout<<v<<endl;

    return 0;
}