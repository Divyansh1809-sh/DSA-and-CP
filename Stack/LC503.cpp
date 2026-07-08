#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& v) {
        vector<int> ans(v.size(), -1);

for(int i=0;i<v.size();i++)
{
    for(int j=1;j<v.size();j++)
    {
        int idx=(i+j)%v.size();

        if(v[idx]>v[i])
        {
            ans[i]=v[idx];
            break;
        }
    }
}
       return ans; 
    }
};