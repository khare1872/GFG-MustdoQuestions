class Solution{
	public:
    	long long findNth(long long N)
    {
       long long ans = 0;
       long long bit =1;
       while(N>0){
           ans+=(bit*(N%9));
           bit*=10;
           N/=9;
       }
       return ans;
    }
};
