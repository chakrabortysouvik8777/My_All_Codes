class Solution {
    public int pathSum(TreeNode root, int targetSum) {
        HashMap <Long,Integer> map = new HashMap<>();
        map.put(0L,1);
        return dfs(root,0L,targetSum,map);
        }
    private int dfs(TreeNode temp, Long currsum, int targetSum, HashMap <Long,Integer> map){
        if(temp == null) return 0;
        currsum += temp.val;
        int count = map.getOrDefault(currsum-targetSum,0);
        map.put(currsum,map.getOrDefault(currsum,0) + 1);
        count += dfs(temp.left,currsum,targetSum,map);
        count += dfs(temp.right,currsum,targetSum,map);
        map.put(currsum,map.get(currsum)-1);
        return count;

    }
}
