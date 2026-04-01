/*
    Divide & Conquer :
    -> Convert Sorted Array to Binary Search Tree (Easy)
      #108 | Array | Divide and Conquer | Tree | BST | Binary Tree
*/

struct TreeNode* build(int* nums, int left, int right){
    if(left > right){
        return NULL;
    }

    int mid = (left + right)/2;
    struct TreeNode* temp = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    temp->val = nums[mid];

    temp->left = build(nums, left, mid-1);
    temp->right = build(nums, mid+1, right);

    return temp;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    return build(nums, 0, numsSize-1);
}