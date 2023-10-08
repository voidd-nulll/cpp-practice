//// https://practice.geeksforgeeks.org/problems/longest-distinct-characters-in-string5848/1



int longestSubstrDistinctChars (string S)
{
    int i=0, j=0, n=S.length(), val=0;
    int a[26]={0};
    
    while(j<n)
    {
        a[S[j]-'a']++;
        
        if(a[S[j]-'a'] > 1)
        {
            while(a[S[j]-'a'] > 1)
            {
                a[S[i]-'a']--;
                i++;
            }
        }
        
        val=max(val,j-i+1);
        j++;
    }
    
    return val;
}