class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int ans  = 0;
    	int res = 0;
    	int  i = 0;
    	int  j = 0;
    	while(i<n&&j<n){
    	    if(arr[i]<=dep[j]) {
    	        i++;
    	        ans++;
    	    }
    	    else {
    	        j++;
    	        ans--;
    	    }
    	    res = max(res,ans);
    	  }
    	  return res;
    }
};
