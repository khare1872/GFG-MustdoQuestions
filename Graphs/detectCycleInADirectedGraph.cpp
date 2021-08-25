class Solution
{
    public:
	bool dfs(int n,vector<int>graph[],vector<int>& visited,vector<int>& path,int node){
         visited[node]=1;
         if(path[node]==1) return true;
         //if(visited[node]==1 && find(path.begin(),path.end(),node)==path.end()) return true;
         else {
             //insert node in path 
             path[node]=1;
             //dfs for every neighbour
             for(int i = 0;i<graph[node].size();i++){
                 if(path[graph[node][i]]==1) return true;
                 if(!visited[graph[node][i]])
                    if(dfs(n,graph,visited,path,graph[node][i])) return true;
             }
             //remove node from path
             path[node]=0;
             return false;
         }
        
    }
	bool isCyclic(int N, vector<int> graph[]) 
	{
	   vector<int> visited(N,0);
	   vector<int> path(N,0);
	   for(int i =0;i<N;i++){
	       if(!visited[i]){
	           bool cycle = dfs(N,graph,visited,path,i);
	           if(cycle) return true;
	       }
	   }
	   return false;
	}
};
