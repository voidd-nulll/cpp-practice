//// https://atcoder.jp/contests/abc072/tasks/abc072_b

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    
    for(int i=0; i<a.size(); i+=2)
    {
        cout<<a[i];
    }
    
    return 0;
}
