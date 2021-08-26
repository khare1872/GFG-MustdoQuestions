class Solution{
public:
 ll dp[1001][1001];
long long combination (int m,int n){
    if(m<n) return 0;
    if(n==0||m==n) return 1;
    if(dp[m][n]!=-1) return dp[m][n];
    else return dp[m][n] = (combination(m-1,n)+combination(m-1,n-1))%1000000007;
}
    vector<ll> nthRowOfPascalTriangle(int n) {
        memset(dp,-1,sizeof(dp));
        vector<ll> v;
        for(int i = 0;i<=n-1;i++){
            v.push_back(combination(n-1,i));
        }
        return v;
    }
};
