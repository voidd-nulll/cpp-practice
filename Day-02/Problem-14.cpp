//// https://codeforces.com/problemset/problem/1703/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
    
        int v[26] = {0};
    
        for(int i=0; i<a.size(); i++)
        {
            int c = a[i] - 'A';
            v[c]++;
        }
    
        int sum = 0;
    
        for(int i=0; i<26; i++)
        {
            if(v[i]!=0)
            {
                sum += v[i] + 1; 
            }
        }
    
        cout<<sum<<endl;
    }
    
    return 0;
}
