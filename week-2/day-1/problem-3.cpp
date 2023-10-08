//// https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1


class Solution{
  public:
    int longestKSubstr(string s, int k) {
    int j=0, i=0, unq=0, flg=0, val=0, n=s.size();

    int frq[26] = {0};
    while(j<n)
    {
        frq[s[j]-'a']++;
        if(frq[s[j]-'a'] == 1)
        {
            unq++;
        }
        if(unq > k)
        {
            frq[s[i] - 'a']--;
            if(frq[s[i] - 'a']==0) unq--;
            i++;
        }
        if(unq == k)
        {
            val = max(val, j-i+1);
            flg = 1;
        }
        j++;
    }
    
    if(flg!=0) return val;
    else return -1;
    
    }
};
