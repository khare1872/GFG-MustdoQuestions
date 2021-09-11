class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        map<int,int> m;
        for(int i = 0;i<N;i++){
            if(m.find(A1[i])==m.end()) m[A1[i]]=1;
            else m[A1[i]]++;
        }
        vector<int> ans;
        for(int i = 0;i<M;i++){
            if(m.find(A2[i])!=m.end()){
                while(m[A2[i]]>0){
                    ans.push_back(A2[i]);
                    m[A2[i]]--;
                }
            }
        }
        for(auto i : m){
            while(i.second!=0) {
                ans.push_back(i.first);
                i.second--;
            }
        }
        return ans;
    } 
};
