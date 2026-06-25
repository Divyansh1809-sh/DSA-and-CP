#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target)
    {
        for(int i = 0; i < v.size(); i++)
        {
            for(int j = 0; j < v[i].size(); j++)
            {
                if(target==v[i][j])
                return true;
            }
        }
        return false;
    }
};