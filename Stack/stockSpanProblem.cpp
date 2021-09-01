class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       vector<int> S(n,1);
       stack<int> st;
       st.push(0);
       S[0] = 1;
       for (int i = 1; i < n; i++) {
            while (!st.empty() && price[st.top()] <= price[i])
            st.pop();
            S[i] = (st.empty()) ? (i + 1) : (i - st.top());
            st.push(i);
    }
    return S;
    }
};
