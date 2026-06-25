#include <bits/stdc++.h>
using namespace std;

//Problem Link- https://leetcode.com/problems/binary-tree-maximum-path-sum/

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

    int globalMaxSum = INT_MIN;
    
    int findMaxGain(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int leftGain = max(findMaxGain(root->left), 0);
        int rightGain = max(findMaxGain(root->right), 0);
        int currentPathSum = root->val + leftGain + rightGain;
        globalMaxSum = max(globalMaxSum, currentPathSum);
        return root->val + max(leftGain, rightGain);
    }

    int maxPathSum(TreeNode* root) {
        findMaxGain(root);
        return globalMaxSum;
    }
};