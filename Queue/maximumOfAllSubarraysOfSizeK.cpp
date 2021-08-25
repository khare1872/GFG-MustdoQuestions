//O(nlogn) Time and O(n) Space complexity solution
class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> ans;
        
        priority_queue<pair<int,int>> pq;
        for(int i =0;i<k;i++){
            pq.push({arr[i],i});
        }
        ans.push_back(pq.top().first);
        for(int i =k;i<n;i++){
            pq.push({arr[i],i});
            int index = pq.top().second;
            while(index<i-k+1){
                pq.pop();
                index=pq.top().second;
            }
            ans.push_back(arr[index]);
        }
        return ans;
    }
};
