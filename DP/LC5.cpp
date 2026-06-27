#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s)
    {
        string ans="";
        for(int i = 0; i < s.length(); i++)
        {
        // Odd length palindrome
        int l = i;
        int r = i;

        while(l >= 0 && r < s.length() && s[l] == s[r])
        {
            if(r - l + 1 > ans.length())
                ans = s.substr(l, r - l + 1);

            l--;
            r++;
        }

        // Even length palindrome
        l = i;
        r = i + 1;

        while(l >= 0 && r < s.length() && s[l] == s[r])
        {
            if(r - l + 1 > ans.length())
                ans = s.substr(l, r - l + 1);

            l--;
            r++;
        }
    }
    return ans;
    }
};