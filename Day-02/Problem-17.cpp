//// https://atcoder.jp/contests/abc150/tasks/abc150_b

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    
    int sum = 0;
    
    for(int i=0; i<n-2; i++)
    {
        if(a[i] == 'A')
        {
            if(a[i+1] == 'B')
            {
                if(a[i+2] == 'C') sum += 1;
            }
        }
    }
    cout<<sum<<endl;
    
    return 0;
}
