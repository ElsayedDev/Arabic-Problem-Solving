#include "common.h"
using namespace std;

/**
 * @brief
 * return the inorder traversal of its nodes' values.
 *
 * InOrder y3ny [value of N] between L & R => L N R
 *
 * PreOrder y3ny [value of N] before L & R => N L R
 *
 * PostOrder y3ny [value of N] after L & R => L R N
 *
 */

class Solution
{

public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        // result de lly hyt3mlha return f el function
        vector<int> result;
        // dfs(root, result) de el function elly hy3mlha traverse 3la el tree
        // w dta5od el root w el result w hy3mlha push_back f el result
        dfs(root, result);
        // return el result w law empty hyrg3 vector fadya
        return result;
    }

private:
    /**
     * @param node الجذع الحالي للشجرة
     * @param result قائمة لتخزين القيم المرتبة وفقًا لترتيب الزيارة
     */
    void dfs(TreeNode *node, vector<int> &result)
    {

        // base case
        if (node == nullptr)
            return;

        // ro7 dawr 3la el left l7d a5er 7aga
        dfs(node->left, result);

        // 3mlna push_back 3la el result le node value 34an (inOrder)
        result.push_back(node->val);

        // ro7 dawr 3la el right l7d a5er 7aga
        dfs(node->right, result);
    }
};
