/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
 */

// @lc code=start
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
#include <iostream>
#include <vector>
#include <queue>
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;

        if(!root) return result;

        queue<TreeNode*> q;
        q.push(root);
        
        while( !q.empty() ) {
            int sz = q.size();
            vector<int> tp;  // for storing the current level nodes

            while( sz > 0 ) {
                TreeNode * p = q.front();
                q.pop();

                if( p->left != NULL ) {  // p.left is not null
                    q.push(p->left);
                }

                if( p->right != NULL ) { // p.right is not null
                    q.push(p->right);
                }

                tp.push_back(p->val); // input the value into 
                sz--;
            }
        }
    }
};
// @lc code=end

