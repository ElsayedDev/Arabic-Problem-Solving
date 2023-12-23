#include "common.h"
using namespace std;

/**
 * @brief
 * Given the root of a binary tree, determine if it is a valid binary search tree (BST).
 *
 * BST:
 * The left subtree of a node contains only nodes with keys less than the node's key.
 *  check https://github.com/ElsayedDev/Arabic-Problem-Solving/blob/main/topics/bst.md
 *
 */

class Solution
{
public:
    /**
     * @brief
     * 1. 3mlna stack 34an n7ot feh el nodes
     * 2. 3mlna prev 34an n7ot feh el previous node
     * 3. dawr 3la el tree l7d ma el root null w el stack fady
     * 4. dawr 3la el left l7d a5er 7aga w push el nodes f el stack
     * 5. 3mlna root = stack.top() w stack.pop()
     * 6. law el prev != null w el prev >= root->val return false
     * 7. prev = root
     * 8. root = root->right
     * 9. return true
     */
    bool isValidBST(TreeNode *root)
    {
        // if root is null return true
        if (root == nullptr)
            return true;

        // stack to store the nodes
        stack<TreeNode *> st;
        // prev to store the previous node
        TreeNode *prev = nullptr;
        // while root not null or stack not empty

        while (root != nullptr || !st.empty())
        {
            while (root != nullptr)
            {
                st.push(root);
                root = root->left;
            }
            root = st.top();
            st.pop();
            if (prev != nullptr && prev->val >= root->val)
                return false;

            prev = root;
            root = root->right;
        }
        return true;
    }
};