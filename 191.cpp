public class Solution {
    public int hammingWeight(int n) {
        int count = 0;
        
        while (n != 0) {
            // Perform the operation to clear the rightmost 1 bit
            n &= (n - 1);
            count++;
        }
        
        return count;
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        int n = 00000000000000000000000000001011;
        System.out.println(solution.hammingWeight(n)); // Output: 3
    }
}
Input
n =
11
Output
3
Expected
3
