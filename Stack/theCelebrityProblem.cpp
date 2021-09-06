class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
    int C;
    for (int i = 0; i < n; i++)
        s.push(i);
    while (s.size() > 1)
    {   int A = s.top();
        s.pop();
        int B = s.top();
        s.pop();
        if (M[A][B])
        {
          s.push(B);
        }
        else
        {
          s.push(A);
        }
    }
    if(s.empty())
        return -1;
    C = s.top();
    s.pop();
    for (int i = 0; i < n; i++)
    {
        if ( (i != C) &&
                (M[C][i] ||
                 !M[i][C]) )
            return -1;
    }
 
    return C;
        
    }
};
