public class Solution {
    public int maxSubArray(int[] nums) {
        // Initialize currentMax and globalMax to the first element of the array
        int currentMax = nums[0];
        int globalMax = nums[0];
        
        // Start iterating from the second element
        for (int i = 1; i < nums.length; i++) {
            // Update currentMax: either add the current element to the existing subarray,
            // or start a new subarray with the current element
            currentMax = Math.max(nums[i], currentMax + nums[i]);
            
            // Update globalMax to be the maximum of globalMax and currentMax
            globalMax = Math.max(globalMax, currentMax);
        }
        
        return globalMax;
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] nums = {-2,1,-3,4,-1,2,1,-5,4};
        System.out.println(solution.maxSubArray(nums));  // Output: 6
    }
}
Input
nums =
[-2,1,-3,4,-1,2,1,-5,4]
Output
6
Expected
6
