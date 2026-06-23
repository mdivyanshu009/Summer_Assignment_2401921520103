#include <bits/stdc++.h>
using namespace std;

//Problem Link- https://leetcode.com/problems/binary-tree-inorder-traversal/

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
    void traverse(TreeNode* root, vector<int>& result) {
        if (root == nullptr) {
            return;
        }
        
        traverse(root->left, result);  // 1. Visit Left Subtree
        result.push_back(root->val);   // 2. Visit Current Root Node
        traverse(root->right, result); // 3. Visit Right Subtree
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        traverse(root, result);
        return result;
    }
};