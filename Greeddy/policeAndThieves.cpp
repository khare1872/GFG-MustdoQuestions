class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        vector<int> police;
        vector<int> thief;
        for(int i =0;i<n;i++){
            if(arr[i]=='P') police.push_back(i);
            else if(arr[i]=='T') thief.push_back(i);
        }
        int policeLocation = 0;
        int thiefLocation =0;
        int ans = 0;
        while(policeLocation<police.size()&&thiefLocation<thief.size()){
            if(abs(police[policeLocation]-thief[thiefLocation])<=k) {
                ans++;
                policeLocation++;
                thiefLocation++;
            }
            else if(police[policeLocation]>thief[thiefLocation]) thiefLocation++;
            else policeLocation++;
        }
        return ans;
        
    }
};
