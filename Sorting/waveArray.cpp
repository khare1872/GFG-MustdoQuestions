class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(vector<int>& arr, int n){
        
        sort(arr.begin(),arr.end());
        for(int i =0;i<n-1;i+=2){
            swap(arr[i],arr[i+1]);
        }
        
    }
};
