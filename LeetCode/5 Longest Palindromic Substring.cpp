#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool IsPalindrome(string s)
{
    int i = 0, j = s.size()-1;
    if (s.size() == 0)
    {
        return false;
    }
    if (s.size() == 1)
    {
        return true;
    }

    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

string LongestPalindrome(string s)
{
    string longestTillNow;
    int maxLen = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int len = 1; len <= s.size()-i; len++)
        {
            string currentString = s.substr(i, len);
            if (IsPalindrome(currentString))
            {
                cout << "Found: " << currentString << endl;
                if (maxLen < len)
                {
                    maxLen = len;
                    longestTillNow = currentString;
                }
            }
        }
    }
    return longestTillNow;
}

string LongestPalindrome2(string s)
{
    int slen = s.size();
    vector<vector<int> > data(slen, vector<int>(slen, 0));
    string longestTillNow;
    int longestTillNowLen = 0;

    for (int i = 0; i < slen; i++)
    {
        data[i][i] = 1;
    }

    for (int i = slen-2; i >= 0; i--)
    {
        for (int j = i+1; j < slen; j++)
        {
            if (s[i] == s[j])
            {
                data[i][j] = data[i+1][j-1];
                if (i == j-1)
                {
                    data[i][j] = 1;
                }
            }
        }
    }

    // for (int i = 0; i < slen; i++)
    // {
    //     cout << endl;
    //     for (int j = 0; j < slen; j++)
    //     {
    //         cout << data[i][j] << " ";
    //     }
    // }
    // cout << endl;

    for (int i = 0; i < slen; i++)
    {
        for (int j = i; j < slen; j++)
        {
            if (data[i][j] == 1 && j-i+1 > longestTillNowLen)
            {
                longestTillNow = s.substr(i, j-i+1);
                longestTillNowLen = j-i+1;
            }
        }
    }

    return longestTillNow;
}

int main() {
    string inp;
    cin >> inp;
    cout << "IsPalindrome: " << IsPalindrome(inp) << endl;
    cout << "LongestPalindrome: " << LongestPalindrome2(inp) << endl;
    return 0;
}