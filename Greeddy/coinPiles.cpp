class Solution {
  public:
    int minSteps(int A[], int N, int K) {
        sort(A,A+N);
        int ans = INT_MAX;
        //prefix sum
        vector<int> prefix(N,0);
        prefix[0]=A[0];
        for(int i =1;i<N;i++){
         prefix[i]=A[i]+prefix[i-1];   
        }
        //consider each point as minimum.
        for(int i = 0;i<N;i++){
            int sum = prefix[i]-A[i];
            int j = upper_bound(A,A+N,A[i]+K)-A;
            sum+=(prefix[N-1]-prefix[j-1])-(N-j)*(K+A[i]);
            //cout<<j<<" "<<sum<<endl;
            ans=min(ans,sum);
        }
        return ans;
    }
};
