//// https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399

#include<bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    long long j=0, i=0, sum=0, mx=0, n=a.size();

    while(j<n)
    {
        sum += a[j];
        while(sum > k)
        {
            sum -= a[i];
            i++;
        }
        if(sum == k) mx = max(mx, j-i+1);
        j++;
    }

    return mx;
}