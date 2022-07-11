
using namespace std;

/*
Struct TreeNode is in-built in the solution file on leetcode.com. 
When running the code on the website, do not include this struct.
 */
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
    
public:
    bool evaluateTree(TreeNode* root) {
        if (root->val == 0) {
            return false;
        }
        if (root->val == 1) {
            return true;
        }
        
        bool left = evaluateTree(root->left);
        bool right = evaluateTree(root->right);
        return root->val == 2 ? (left || right) : (left && right);
    }
};
