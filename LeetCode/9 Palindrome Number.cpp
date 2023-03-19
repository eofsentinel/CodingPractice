// https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
        {
            return false;
        }
        
        int length = 0;
        int digits[100] = { 0 };
        while (x != 0)
        {
            digits[length++] = x % 10;
            x = x / 10;
        }

        for (int i = 0; i < length/2 ; i++)
        {
            if (digits[i] != digits[length-i-1])
            {
                return false;
            }
        }

        return true;
    }
};