//// https://codeforces.com/problemset/problem/102/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int sz = s.size();
    int cnt = 0;
    
    while(sz>1)
    {
        int sum = 0;
        
        for(int i=0; i<sz; i++)
        {
            sum += s[i] - '0';
        }
        
        s = to_string(sum);
        sz = s.size();
        cnt++;
    }
    
    cout<<cnt<<endl;

    return 0;
}