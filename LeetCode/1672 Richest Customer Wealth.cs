// https://leetcode.com/problems/richest-customer-wealth/description/

public class Solution {
    public int MaximumWealth(int[][] accounts) {
        int maxWealth = 0;
        int currentWealth = 0;
        int numberOfCustomers = accounts.Length;
        int numberOfBanks = numberOfCustomers > 0 ? accounts[0].Length : 0;
        for (int i = 0; i < numberOfCustomers; i++)
        {
            currentWealth = 0;
            for (int j = 0; j < numberOfBanks ; j++)
            {
                currentWealth += accounts[i][j];
            }

            if (currentWealth > maxWealth)
            {
                maxWealth = currentWealth;
            }
        }

        return maxWealth;
    }
}