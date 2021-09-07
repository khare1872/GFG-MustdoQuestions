class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* root){
         if(!root) return 1;
        else {
            return 1+ max(height(root->left),height(root->right));
        }
    }
};
