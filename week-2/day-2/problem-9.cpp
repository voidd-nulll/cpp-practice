//// https://atcoder.jp/contests/abc051/tasks/abc051_b

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,s;
    cin>>k>>s;
    
    int cnt = 0;
    
    for(int x=0; x<=k; x++)
    {
        for(int y=0; y<=k; y++)
        {
            int z = s - x - y;
            if(z >= 0 && z <= k) cnt++;
        }
    }
    
    cout<<cnt<<endl;

    return 0;
}