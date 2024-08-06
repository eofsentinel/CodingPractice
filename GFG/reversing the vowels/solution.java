//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            String s;
            s = sc.next();
           
            Solution ob = new Solution();
            
            System.out.println(ob.modify(s));    
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution
{
    String modify (String s)
    {
        // your code here
        char[] schars = s.toCharArray();
        HashSet<Character> vowels = new HashSet<Character>();
        vowels.add('a');
        vowels.add('e');
        vowels.add('i');
        vowels.add('o');
        vowels.add('u');
        List<Character> chars = new ArrayList<Character>();
        int n = schars.length;
        for (int i = 0; i < n; i++) {
            if (vowels.contains(schars[i])) {
                chars.add(schars[i]);
            }
        }
        int m = chars.size();
        for (int i = 0; i < m/2; i++) {
            int j = m - i - 1;
            char temp = chars.get(i);
            chars.set(i, chars.get(j));
            chars.set(j, temp);
        }
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (vowels.contains(schars[i])) {
                schars[i] = chars.get(j++);
            }
        }
        
        return new String(schars);
    }
}