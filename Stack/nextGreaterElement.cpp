class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long> st;
        vector<long long> ans(n,0);
        for(int i = n-1;i>=0;i--){
            while(st.size()!=0){
                long long temp = st.top();
                if(temp>arr[i]) {
                    ans[i]=temp;
                    break;
                }
                else {
                    st.pop();
                }
            }
            if(st.size()==0) ans[i]=-1;
            st.push(arr[i]);
        }
        return ans;
    }
};
