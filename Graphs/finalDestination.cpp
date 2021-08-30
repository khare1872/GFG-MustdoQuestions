class Solution {
  public:
    int canReach(long long a, long long b, long long x) {
        int minimumStepsRequired = abs(a)+abs(b);
        if(minimumStepsRequired>x) return 0;
        if((x-minimumStepsRequired)%2==0) return 1;
        return 0;
   }
};
