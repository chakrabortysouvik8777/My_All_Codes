import java.util.Arrays;
import java.util.List;
import java.util.ArrayList;

class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        List<Boolean> result = new ArrayList<>();
        
        // Step 1: Find the maximum number of candies any kid currently has
        int maxCandies = 0;
        for (int candy : candies) {
            if (candy > maxCandies) {
                maxCandies = candy;
            }
        }

        
        for (int candy : candies) {
            result.add(candy + extraCandies >= maxCandies);
        }
        
        return result;
    }
