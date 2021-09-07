class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node* root){
        if(!root) return 0;
        else {
            return 1+ max(height(root->left),height(root->right));
        }
    }
    bool isBalanced(Node *root)
    
    {
        if(!root) return true;
       int hl = height(root->left);
       int hr = height(root->right);
       return (abs(hl-hr)<=1&&isBalanced(root->left)&&isBalanced(root->right));
    }
};
