public class Solution {
    public int reverseBits(int n) {
        int result = 0;
        
        for (int i = 0; i < 32; i++) {
            // Shift result to the left to make space for the new bit
            result <<= 1;
            // Add the rightmost bit of n to result
            result |= (n & 1);
            // Shift n to the right to move to the next bit
            n >>= 1;
        }
        
        return result;
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        int n = 43261596;
        System.out.println(solution.reverseBits(n)); // Output: 964176192
    }
}
Input
n =
00000010100101000001111010011100
Output
   964176192 (00111001011110000010100101000000)
Expected
   964176192 (00111001011110000010100101000000)
