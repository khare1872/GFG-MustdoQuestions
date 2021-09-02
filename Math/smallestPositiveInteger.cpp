class Solution
{   
public:
    long long smallestpositive(vector<long long> arr, int n)
    { 
       long long int res = 1; 
       sort(arr.begin(),arr.end());
       for (int i = 0; i < n && arr[i] <= res; i++)
       res = res + arr[i];
 
       return res;
    } 
};
