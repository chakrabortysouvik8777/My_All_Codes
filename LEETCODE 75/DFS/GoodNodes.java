class Solution {
    public int goodNodes(TreeNode root) {
        return dfs(root,root.val);
    }
    private int dfs(TreeNode temp, int Max){
        if(temp == null) return 0;
        int count = 0;
        count = (temp.val >= Max)? 1 : count;
        Max = Math.max(temp.val,Max);
        count += dfs(temp.left , Max);
        count += dfs(temp.right , Max);
        return count;
    }
}
