class Solution {
    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
        List<Integer> l1 = new ArrayList<>();
        List<Integer> l2 = new ArrayList<>();
        dfs(root1,l1);
        dfs(root2,l2);
        return l1.equals(l2) ;
    }
    private void 
