/*
    Binary Tree :
    -> Invert Binary Tree (Easy)
      #226 | Tree | DFS | Binary Tree
*/

struct TreeNode* invertTree(struct TreeNode* root) {
    if(root == NULL) return root;
    struct TreeNode* temp = root->left;
    root->left = invertTree(root->right);
    root->right = invertTree(temp);
    return root;
}