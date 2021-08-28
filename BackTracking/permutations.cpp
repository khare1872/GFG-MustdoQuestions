class Solution{
    public:
    //Complete this function
    void solve(vector<string>& v,string s,int i){
        if(i==s.length()-1) {
            v.push_back(s);
            return;
        }
        
        for(int j =i;j<s.length();j++){
            swap(s[i],s[j]);
            solve(v,s,i+1);
            swap(s[i],s[j]);
        }
        return;
    }
    vector<string> permutation(string s)
    {
        vector<string> v;
        solve(v,s,0);
        sort(v.begin(),v.end());
        return v;
    }
};
