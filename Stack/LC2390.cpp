#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeStars(string s)
    {
            stack<char>st;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]=='*')
		{
			st.pop();
			continue;
		}
		else
		{
			st.push(s[i]);
		}
	}
	string rs="";
	while(!st.empty())
    {
        rs+=st.top();
        st.pop();
    }
    reverse(rs.begin(), rs.end());
    return rs;
    }
};