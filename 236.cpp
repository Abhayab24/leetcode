#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL)
            return NULL;

        if (root->val == p->val || root->val == q->val)
            return root;

        TreeNode* leftLca = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightLca = lowestCommonAncestor(root->right, p, q);

        if (leftLca && rightLca)
            return root;

        return (leftLca != NULL) ? leftLca : rightLca;
    }
};

int main() {
    /*
        Tree:
                3
               / \
              5   1
             / \ / \
            6  2 0  8
              / \
             7   4
    */

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);

    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);

    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    TreeNode* p = root->left;                 // Node 5
    TreeNode* q = root->left->right->right;  // Node 4

    Solution sol;
    TreeNode* ans = sol.lowestCommonAncestor(root, p, q);//commit

    if (ans)
        cout << "LCA: " << ans->val << endl;
    else
        cout << "LCA not found" << endl;

    return 0;//new question


}
