class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> st;
        for(int i =0;i<x.length();i++){
            if(x[i]=='{'||x[i]=='['||x[i]=='('){
                st.push(x[i]);
            }
            else {
                if(st.size()==0) return false;
                if(x[i]==']'){
                    if(st.top()!='[') return false;
                    else st.pop();
                }
                else if(x[i]=='}'){
                    if(st.top()!='{') return false;
                    else st.pop();
                }
                else {
                    if(st.top()!='(') return false;
                    else st.pop();
                }
            }
        }
        return st.size()==0;
    }

};
