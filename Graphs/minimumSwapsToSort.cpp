class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    unordered_map<int,int> m;
	    vector<int> temp = nums;
	    sort(temp.begin(),temp.end());
	    for(int i =0;i<nums.size();i++) m[nums[i]]=i;
	    int count = 0;
	    for(int i =0;i<nums.size();i++){
	        if(nums[i]!=temp[i]){
	            count++;
	            int currentIndex = m[temp[i]];
	            swap(nums[i],nums[currentIndex]);
	            m[nums[i]] = i;
	            m[nums[currentIndex]] = currentIndex;
	        }
	    }
	    return count;
	}
};
