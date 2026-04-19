/*
    Binary Tree General :
    -> Count Complete Tree Nodes (Easy)
      #222 | Binary Search | Bit Manipulation | Tree | Binary Tree
*/

#include <stdbool.h>
#include <math.h>

int lheight(struct TreeNode* root, int count){
    if(root == NULL) return 0;
    return(root->left, count+1);
}

int rheight(struct TreeNode* root, int count){
    if(root == NULL) return 0;
    return(root->right, count+1);
}

int countNodes(struct TreeNode* root){
    if(root == NULL) return 0;

    int lcnt = lheight(root->left, 1);
    int rcnt = rheight(root->right, 1);

    if(lcnt == rcnt) return pow(2, lcnt) - 1;

    return 1 + countNodes(root->left) + countNodes(root->right);
}