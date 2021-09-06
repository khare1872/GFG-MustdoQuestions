class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        int ans =0;
       sort(arr,arr+n);
       for(int i =0;i<n;i++){
           int k = i+2;
           for(int j = i+1;j<n;j++){
               while(k<n&&arr[i]+arr[j]>arr[k]) k++;
               if(k>j) ans+= k-j-1;
           }
       }
       return ans;
    }
};
