#include <bits/stdc++.h>
using namespace std;
  struct TreeNode {
    int val;
   TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    bool isIdentical(TreeNode* root, TreeNode* subRoot){
        if(root==NULL && subRoot==NULL){
            return true;
        }
        else if(root==NULL && subRoot!=NULL || root!=NULL && subRoot==NULL){
            return false;
        }
        else if(root->val!=subRoot->val) return false;
        return isIdentical(root->left ,subRoot->left) && isIdentical(root->right,subRoot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL){
            return false;
        }
    if(subRoot==NULL)
    {
        return true;
    }
        if(isIdentical(root,subRoot)){
            return true;
        }
        return isSubtree(root->left ,subRoot) || isSubtree(root->right,subRoot);
        
    }
};
