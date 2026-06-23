#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeString(string s)
    {
          
    

    stack<int> nums;
    stack<string> strs;

    string curr = "";
    int num = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(isdigit(s[i]))
        {
            num = num * 10 + (s[i] - '0');
        }
        else if(s[i] == '[')
        {
            nums.push(num);
            strs.push(curr);

            num = 0;
            curr = "";
        }
        else if(s[i] == ']')
        {
            int cnt = nums.top();
            nums.pop();

            string prev = strs.top();
            strs.pop();

            string temp = "";

            for(int j = 0; j < cnt; j++)
            {
                temp += curr;
            }

            curr = prev + temp;
        }
        else
        {
            curr += s[i];
        }
    }

    return curr;
}
    
};