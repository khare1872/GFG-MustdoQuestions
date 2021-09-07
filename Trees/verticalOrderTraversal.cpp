class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *A)
    {
       if(!A) return {};
    queue<pair<int,Node*>>q;
    map<int,vector<int>> m;
    
    //step1
    Node *curr=A;
    q.push(make_pair(0,A));
    while(!q.empty())
    {
        int n = q.size();
        for(int i=0;i<n;i++)
        {
            pair<int,Node*> temp =q.front();
            q.pop();
            m[temp.first].push_back(temp.second->data); 
            if(temp.second->left)  q.push(make_pair(temp.first-1,temp.second->left));
            if(temp.second->right) q.push(make_pair(temp.first+1,temp.second->right));
        }
    }
    vector<int>v;
    for (auto x : m)
    {
        for(auto i: x.second) v.push_back(i);
    }
    
    return v;
   }
};
