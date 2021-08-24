class Solution
{
    public:
    //Function to find the number of islands.
    vector<int> dx = {1,1,1,0,0,-1,-1,-1};
    vector<int> dy = {1,0,-1,1,-1,1,0,-1};
    bool isSafe(int n,int m,int x,int y){
        if(x<0||y<0||x>=n||y>=m) return false;
        return true;
    }
    void dfs(vector<vector<char>>& grid,int i,int j){
        if(grid[i][j]=='0') return ;
        else {
            int n = grid.size();
            int m = grid[0].size();
            grid[i][j]='0';
            for(int k =0;k<8;k++){
                int new_x = i+dx[k];
                int new_y = j+dy[k];
                 if(isSafe(n,m,new_x,new_y)&&grid[i+dx[k]][j+dy[k]]=='1') 
                  dfs(grid,i+dx[k],j+dy[k]);
             }
        }
        
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        // for(int i =0;i<8;i++) cout<<dx[i]<<" ";
        int count = 0;
        for(int i =0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        return count;
    }
  };
