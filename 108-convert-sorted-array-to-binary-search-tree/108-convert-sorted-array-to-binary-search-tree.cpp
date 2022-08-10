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
    TreeNode* left1(int left,int right,vector<int>&nums)
    {
        if(left>=right)
            return NULL;
        
        int mid=left+(right-left)/2;
        
        TreeNode *root=new TreeNode(nums[mid]);
        
        root->left = left1(left,mid,nums);
        root->right = left1(mid+1,right,nums);
        
        return root;
        
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums)
    {
        int l=nums.size();
       // TreeNode *root=new TreeNode(nums[l/2]);
        
        return left1(0,l,nums);
        //right(root,l/2+1,nums);
        
        //return root;
    }
};