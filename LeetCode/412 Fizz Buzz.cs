// https://leetcode.com/problems/fizz-buzz/

public class Solution {
    public IList<string> FizzBuzz(int n) {
        IList<string> result = new List<string>();
        string fizz = "Fizz";
        string buzz = "Buzz";

        for (int i = 1; i <= n; i++)
        {
            result.Add(string.Empty);
            if (i % 3 == 0)
            {
                result[i-1] += fizz;
            }
            if (i % 5 == 0)
            {
                result[i-1] += buzz;
            }
            if (result[i-1] == string.Empty)
            {
                result[i-1] = i.ToString();
            }
        }

        return result;
    }
}