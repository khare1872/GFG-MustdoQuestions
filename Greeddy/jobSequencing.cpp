//O(n*m) time solution with O(n) space
class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,[](Job a,Job b){
            return a.profit>b.profit;
        });
        vector<int> v(101,-1);
        int profit = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            int deadline = arr[i].dead;
            for(int j = deadline;j>=1;j--){
                if(v[j]==-1){
                    profit+=arr[i].profit;
                    v[j]=1;
                    count++;
                    break;
                }
            }
        }
        return {count,profit};
        
    } 
}; 
