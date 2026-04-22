/*
    Binary Tree BFS :
    -> Average of Levels in Binary Tree (Easy)
      #637 | Tree | BFS | Binary Tree
*/

class Solution{
    public List<Double> averageOfLevels(TreeNode root){
	if(root == null) return new ArrayList<>();

	Queue<TreeNode> q = new LinkedList<>();
	q.add(root);

	List<Double> res = new ArrayList<>();

	while(!q.isEmpty()){
	    int size = q.size();
	    double average = 0;

	    for(int i = 0; i<size; i++){
		TreeNode node = q.poll();
		average += node.val;

		if(node.left != null) q.add(node.left);
		if(node.right != null) q.add(node.right);
	    }
	    
	    average /= size;
	    res.add(average);
	}

        return res;
   }    
}        