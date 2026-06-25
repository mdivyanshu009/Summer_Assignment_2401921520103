#include <bits/stdc++.h>
using namespace std;

//Problem Link- https://leetcode.com/problems/diameter-of-binary-tree/

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
    int maxDiameter = 0;
    int calculateHeight(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        
        int leftHeight = calculateHeight(root->left);
        int rightHeight = calculateHeight(root->right);
        
        maxDiameter = max(maxDiameter, leftHeight + rightHeight);

        return max(leftHeight, rightHeight) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        calculateHeight(root);
        return maxDiameter;
    }
};