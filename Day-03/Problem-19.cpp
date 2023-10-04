//// https://codeforces.com/problemset/problem/1722/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<string> v[3];
        map<string,int> mp;
        
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<n; j++)
            {
                string s;
                cin>>s;
                
                v[i].push_back(s);
                mp[s]++;
            }
        }
        
        vector<int> person(3,0);
        
        for(int i=0; i<3; i++)
        {
            for(string x:v[i])
            {
                if(mp[x] == 1) person[i] += 3;
                else if (mp[x] == 2) person[i] +=1;
            }
        }
        
        cout<<person[0]<<" "<<person[1]<<" "<<person[2]<<endl;
    }
    
    return 0;
}
