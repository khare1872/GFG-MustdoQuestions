//brute force could be optimized to n^3 after memoization.
class Solution{
public:
long long int solve(int n,int current,int selected){
    if(n==0) return 0;
    if(n<0) return INT_MIN;
    else {
        return  max({
            //print A
            1+solve(n-1,current+1,selected),
            //select and copy all
             solve(n-2,current,current),
            //paste selected
             selected+solve(n-1,current+selected,selected)
            
        });
    }
}
    long long int optimalKeys(int N){
        int current=0;
        int selected=0;
        return solve(N,current,selected);
    }
};
// O(n^2) solution
class Solution{
public:
    long long int dp[76];
    long long int answer(int N){
          if(N<=6) return dp[N] = N;
        // b is a breakpoint then length would be string on screen*(n-b-1);
           if(dp[N]!=-1) return dp[N];
           long long int ans = 0;
        for(int i =N-3;i>=1;i--){
            dp[N]= max(ans,(N-i-1)*answer(i));
            ans=dp[N];
        }
        return dp[N]=ans;
    }
    long long int optimalKeys(int N){
      memset(dp,-1,sizeof(dp));
      return answer(N);
   }
};
