class Solution{
public:
    int find_min_throws(vector<vector<int>>& adj,int start,int finish){
        vector<int> dist(31,INT_MAX);
        queue<int> bfs;
        bfs.push(1);
        dist[1]=0;
        while(!bfs.empty()){
            int current = bfs.front();
            //cout<<current<<"->"<<endl;
            bfs.pop();
            for(int i =0;i<adj[current].size();i++){
                if(dist[adj[current][i]]==INT_MAX){
                    bfs.push(adj[current][i]);
                    dist[adj[current][i]]=dist[current]+1;
                }
            }
        }
        return dist[30];
    }
    int minThrow(int N, int arr[]){
        // code here
    //vector<bool> visited(31,false);
      vector<vector<int>> adj(31);
      for(int i =1;i<31;i++){
          //if(!visited){
          for(int j=1;j<=6;j++){
              if(i+j<=30){
                  int temp =1;
                  for(int k =0;k<2*N;k+=2){
                      if(i+j==arr[k]) {
                          adj[i].push_back(arr[k+1]);
                          temp =0;
                          break;
                         }
                  }
                  if(temp) adj[i].push_back(i+j);
          }
      }
    }
    adj[30].push_back(30);
    return find_min_throws(adj,1,30);
    }
};
