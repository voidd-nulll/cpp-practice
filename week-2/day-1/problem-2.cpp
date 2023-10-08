//// https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1


class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int sum = 0, val=0;
        map<int,int> mp;
        
        for(int i=0; i<N; i++)
        {
            sum += A[i];
            if(sum == K)
            {
                val = max(val, i+1);
                
            }
            if(mp.find(sum-K) != mp.end())
            {
                val = max(val, i-mp[sum-K]);
            }
            if(mp.find(sum) == mp.end())
            {
                mp[sum] = i;
            }
        }
        
        return val;
    } 

};