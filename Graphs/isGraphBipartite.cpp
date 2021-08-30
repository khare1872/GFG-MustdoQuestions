class Solution {
public:
	bool isBipartite(int V, vector<int>adj[]){
	    
	   vector<int> color(V,-1);
	   for(int i = 0;i<V;i++){
	       if(color[i]==-1){
	       color[i]= 0;
	       queue<int> q;
	       q.push(i);
	       while(!q.empty()){
	       int currentVertex = q.front();
	       q.pop();
	       for(auto nbr:adj[currentVertex]){
	           if(nbr==currentVertex) return false;
	           if(color[nbr]==color[currentVertex]) return false;
	           else if(color[nbr]==-1) {
	             color[nbr] = 1-color[currentVertex];
	             q.push(nbr);
	           }
	       }
	      }
	     }
	   }
	   return true;
	}

};
