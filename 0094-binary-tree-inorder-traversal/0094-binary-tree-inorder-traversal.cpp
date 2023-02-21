class Solution
{
public:
    void solution(TreeNode *root, vector<int> &items)
    {
        if (!root)
            return;

        solution(root->left, items);
        items.push_back(root->val);
        solution(root->right, items);
    }
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> items;
        solution(root, items);
        return items;
    }
};