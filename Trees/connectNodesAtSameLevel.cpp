/*struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */


class Solution
{
    public:
    //Function to connect nodes at same level.
    void solve(Node* root,vector<vector<Node*>>& v,int i){
        if(!root) return;
        if(v.size()<=i){
            v.resize(i+1);
        }
         v[i].push_back(root);
         solve(root->left,v,i+1);
         solve(root->right,v,i+1);
         return;
        
    }
    void connect(Node *root)
    {
       vector<vector<Node*>> v;
       solve(root,v,0);
       for(int i =0;i<v.size();i++){
           for(int j = 0;j<v[i].size()-1;j++){
               v[i][j]->nextRight=v[i][j+1];
           }
           v[i][v[i].size()-1]->nextRight=NULL;
       }
    }    
      
};
