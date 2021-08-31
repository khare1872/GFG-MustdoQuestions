class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        if(sum>9*n) return "-1";
        string s="";
        while(n>0){
            if(sum>=9) {
                s+='9';
                sum-=9;
            }
            else {
                s+=sum+'0';
                sum-=sum;
            }
            n--;
        }
        return s;
    }
};
