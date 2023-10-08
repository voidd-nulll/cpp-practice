//// https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

class Solution{
public:
	int search(string pat, string txt) {

	    int frqp[26] = {0};
	    for(int i=0; i<pat.size(); i++)
	    {
	        int c = pat[i] - 'a';
	        frqp[c]++;
	    }
	    
	    int i=0, j=0, cnt=0;
	    int frqt[26] = {0};
	    
	    while(j<txt.size())
	    {
	        int c = txt[j] - 'a';
	        frqt[c]++;
	        
	        if(j>=pat.size()-1)
	        {
	            bool flg = true;
	            for(int i=0; i<26; i++)
	            {
	                if(frqp[i] != frqt[i]) flg = false;
	            }
	            
	            frqt[txt[i]-'a']--;
	            i++;
	            
	            if(flg) cnt++;
	        }
	        
	        j++;
	    }
	   
	   return cnt; 
	}

};

