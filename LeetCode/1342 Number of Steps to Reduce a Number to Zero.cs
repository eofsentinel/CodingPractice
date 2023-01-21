// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

public class Solution {
    public int NumberOfSteps(int num) {
        int val = num;
        int steps = 0;
        while (val != 0)
        {
            if ((val & 1) == 1)
            {
                val -= 1;
            }
            else
            {
                val >>= 1;
            }
            steps += 1;
        }

        return steps;
    }
}