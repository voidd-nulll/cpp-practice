//// https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long j=0,i=0,sum=0;
        
        long mx = INT_MIN;
        
        while(j<N)
        {
            sum += Arr[j];
            if(j>=K-1)
            {
                mx = max(mx, sum);
                sum -= Arr[i];
                i++;
            }
            j++;
        }
        
        return mx;
    }
};