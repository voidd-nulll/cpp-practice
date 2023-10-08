//// https://atcoder.jp/contests/abc124/tasks/abc124_a

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    
    int x = a+b;
    int y = a-1+a;
    int z = b-1+b;
    
    int ans = max(max(x,y),z);
    
    cout<<ans<<endl;
    

    return 0;
}