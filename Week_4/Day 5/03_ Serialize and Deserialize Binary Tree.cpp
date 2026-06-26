/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    string serialize(TreeNode* root) {
        if (!root) return "#";
        return to_string(root->val) + "," + serialize(root->left) + "," + serialize(root->right);
    }

    TreeNode* deserialize(string data) {
        int index = 0;
        return build(data, index);
    }

    TreeNode* build(string& data, int& i) {
        if (i >= data.length()) return nullptr;

        string token = "";
        while (i < data.length() && data[i] != ',') {
            token += data[i++];
        }
        i++; 

        if (token == "#") return nullptr;

        TreeNode* root = new TreeNode(stoi(token));
        root->left = build(data, i);
        root->right = build(data, i);

        return root;
    }
};


// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
