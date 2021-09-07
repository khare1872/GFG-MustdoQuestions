class Solution {
public:
    int solve(Node* root,int& res){
        
            if(root==NULL) return 0;
            
            
            if(!root->left&&!root->right) 
            
            {
                
                return root->data;
                
            }
            
            int l = solve(root->left,res);
            
            int r = solve(root->right,res);
            
            
            if(root->left&&root->right)
            
            {
            
                int temp = root->data+max(l,r);
                
                res = max(res,l+r+root->data);
                
                return temp;
                
            }
            
            return (!root->left)? r + root->data : l + root->data;
    }
    int maxPathSum(Node* root)
    {
            int res = INT_MIN;
            
            int val = solve(root,res);
            
            if(res==INT_MIN) return val;
            
            return res;
    }
};
