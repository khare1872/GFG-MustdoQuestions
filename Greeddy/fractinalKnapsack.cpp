class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
        
    double fractionalKnapsack(int w, Item arr[], int n)
    {
        double ans = 0;
        sort(arr,arr+n,[](Item a, Item b){
            return a.value*b.weight>a.weight*b.value;
        });
        int i =0;
        while(w>0&&i<n){
            if(arr[i].weight<=w){
                ans+=arr[i].value;
                w-=arr[i].weight;
                i++;
            }
            else {
               ans+= arr[i].value*((double)w/(double)arr[i].weight);
               break;
            }
        }
        return ans;
    }
        
};
