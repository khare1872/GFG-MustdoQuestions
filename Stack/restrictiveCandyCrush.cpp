class Solution{
    public:
    string Reduced_String(int k,string s){
        stack<char> st;
        for(int i = 0;i<s.length();i++){
            st.push(s[i]);
            //cout<<st.size()<<" ";
            if(st.size()>=k){
                string t ="";
                t+=st.top();
                //cout<<t<<endl;
                st.pop();
                int i =1;
                int flag = 0;
                while(i<k&&st.size()!=0){
                    char temp = st.top();
                    if(temp!=t[t.length()-1]) {
                        //cout<<"h"<<endl;
                        flag = 1;
                        break;
                    }
                    else {
                        st.pop();
                        t+=temp;
                    }
                    i++;
                }
                //cout<<endl;
                if(flag==1){
                    for(int j = t.length()-1;j>=0;j--) {
                        st.push(t[j]);
                        //cout<<st.top()<<" ";
                    }
                }
            }
        }
        string ans = "";
        while(st.size()!=0){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }


};
