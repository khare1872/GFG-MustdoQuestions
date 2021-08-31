class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        sort(arr.begin(),arr.end());
        int ans = 0;
        int i =0;
        while(K>0&&i<N){
           if(arr[i]<=K) ans+=1;
           else break;
           K-=arr[i];
           i++;
        }
        return ans;
    }
};
