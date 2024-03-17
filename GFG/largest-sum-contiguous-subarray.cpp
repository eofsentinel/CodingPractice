#include<bits/stdc++.h>
using namespace std;

int GetLargestSum_Basic(int arr[], int size)
{
    int maxSoFar = INT_MIN;
    int curSum = 0;
    for (int i = 0; i < size; i++)
    {
        curSum = max(0, curSum + arr[i]);
        if (curSum > maxSoFar)
        {
            maxSoFar = curSum;
        }
    }

    return maxSoFar;
}

pair<int, pair<int, int>> GetLargestSum_Positions(int arr[], int n)
{
    int s1 = 0, s2 = 0, e = 0;
    int curSum = 0, maxSoFar = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        curSum = curSum + arr[i];
        if (maxSoFar < curSum)
        {
            s2 = s1;
            e = i;
            maxSoFar = curSum;
        }
        if (curSum < 0)
        {
            curSum = 0;
            s1 = i+1;
        }
    }

    return make_pair(maxSoFar, make_pair(s2, e));
}

int GetLargestSum_DP(int arr[], int n)
{
    vector<int> dp(n, 0);
    int maxSoFar = 0;
    dp[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        dp[i] = max(dp[i-1] + arr[i], arr[i]);
        if (dp[i] > maxSoFar)
        {
            maxSoFar = dp[i];
        }
    }

    return maxSoFar;
}

int main()
{
    int a[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
    int n = sizeof(a) / sizeof(a[0]);

    int maxSum_Basic = GetLargestSum_Basic(a, n);
    cout << "Basic: " << maxSum_Basic << endl << endl;

    pair<int, pair<int, int>> maxSum_Positions = GetLargestSum_Positions(a, n);
    cout << "Positions: " << maxSum_Positions.first << endl;
    cout << "X: " << maxSum_Positions.second.first;
    cout << ", Y: " << maxSum_Positions.second.second << endl << endl;

    int maxSum_DP = GetLargestSum_DP(a, n);
    cout << "DP: " << maxSum_DP << endl << endl;

    return 0;
}