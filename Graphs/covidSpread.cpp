class Solution {
public:
    // all possible moves
    vector<int> dx = {1,0,0,-1};
    vector<int> dy = {0,-1,1,0};
    bool isSafe(int n,int m, int x,int y){
        if(x<0||y<0||x>=n||y>=m) return false;
        return true;
    }
    int helpaterp(vector<vector<int>> hospital)
    {
        // we will do bfs since minimum time is asked
        //queue for bfs;
        //count of uninfected people
        queue<pair<pair<int,int>,int>> q;
        int count = 0;
        for(int i =0;i<hospital.size();i++){
            for(int j =0;j<hospital[0].size();j++){
                if(hospital[i][j]==2){
                    q.push({{i,j},0});
                    //inplace marking of visited
                    hospital[i][j]=0;
                }
                else if(hospital[i][j]==1) count++;
            }
        }
        //time
        int t=0;
        while(!q.empty()){
            int x = q.front().first.first;
            int y = q.front().first.second;
                t = q.front().second;
                q.pop();
            for(int i =0;i<4;i++){
                int new_x=x+dx[i];
                int new_y=y+dy[i];
                if(isSafe(hospital.size(),hospital[0].size(),new_x,new_y)&&hospital[new_x][new_y]==1){
                    q.push({{new_x,new_y},t+1});
                    hospital[new_x][new_y]=0;
                    count--;
                }
                     
            }
            
        }
        if(count!=0) return -1;
        else return t;
    }
};
