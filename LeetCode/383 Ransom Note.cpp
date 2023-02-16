// https://leetcode.com/problems/ransom-note/description/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int letterCount[26] = { 0 };
        for (int i = 0; i < magazine.length() ; i++)
        {
            letterCount[magazine[i]-'a'] += 1;
        }
        for (int i = 0; i < ransomNote.length() ; i++)
        {
            if (letterCount[ransomNote[i]-'a'] == 0)
            {
                return false;
            }

            letterCount[ransomNote[i]-'a'] -= 1;
        }

        return true;
    }
};