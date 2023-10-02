//// https://atcoder.jp/contests/abc071/tasks/abc071_b

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    
    int ar[26] = {0};
    
    for(int i=0; i<a.size(); i++)
    {
        int c = a[i] - 'a';
        ar[c]++;
    }
    
    bool ans = false;
    char c;
    
    for(int i=0; i<26; i++)
    {
        if(ar[i] == 0)
        {
            ans = true;
            c = i + 'a';
            break;
        }
    }
    
    if(ans) cout<<c<<endl;
    else cout<<"None"<<endl;
    
    return 0;
}
