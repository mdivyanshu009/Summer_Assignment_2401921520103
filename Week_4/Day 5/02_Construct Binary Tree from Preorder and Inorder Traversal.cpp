/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int preorderIndex = 0;
    unordered_map<int, int> inorderMap;

    TreeNode* arrayToTree(vector<int>& preorder, int left, int right){
        if (left > right) {
            return nullptr;
        }

        
        int rootValue = preorder[preorderIndex++];
        TreeNode* root = new TreeNode(rootValue);

        int inorderIndex = inorderMap[rootValue];

        root->left = arrayToTree(preorder, left, inorderIndex - 1);
        root->right = arrayToTree(preorder, inorderIndex + 1, right);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        inorderMap.clear();
        for (int i = 0; i < inorder.size(); i++) {
            inorderMap[inorder[i]] = i;
        }

        return arrayToTree(preorder, 0, inorder.size() - 1);
    }
};
