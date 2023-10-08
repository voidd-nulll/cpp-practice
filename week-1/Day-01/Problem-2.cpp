//// https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) {
    
    int j=0, i=0;
    
    queue<int> q;
    vector<long long> v;
    
    while(j<N)
    {
        if(A[j] < 0) q.push(A[j]);
        if(j >= K-1)
        {
            if(!q.empty()) v.push_back(q.front());
            else v.push_back(0);
            if(A[i] < 0) q.pop();
            i++;
        }
        j++;
    }
    
    return v;
                                                 
 }