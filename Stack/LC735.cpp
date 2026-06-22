#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& v)
    {
        stack<int> st;

        for(int i = 0; i < v.size(); i++)
        {
            int x = v[i];
            bool alive = true;

            while(alive && !st.empty() && st.top() > 0 && x < 0)
            {
                if(abs(st.top()) < abs(x))
                {
                    st.pop();          // stack asteroid dies
                }
                else if(abs(st.top()) == abs(x))
                {
                    st.pop();          // both die
                    alive = false;
                }
                else
                {
                    alive = false;     // current asteroid dies
                }
            }

            if(alive)
                st.push(x);
        }

        vector<int> vo;

        while(!st.empty())
        {
            vo.push_back(st.top());
            st.pop();
        }

        reverse(vo.begin(), vo.end());

        return vo;
    }
};