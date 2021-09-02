class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        long long int sum = 0;
        for(auto i:array) sum+=i;
        return (n*(n+1))/2-sum;
    }
};
