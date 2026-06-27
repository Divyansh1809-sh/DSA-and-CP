#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>>& v)
    {
        int m=v.size();
        int n=v[0].size();
        vector<vector<int>>v1(v.size(),vector<int>(v[0].size()));
    v1[0][0]=v[0][0];
    for(int i=1;i<m;i++)
    {
        v1[i][0]=v1[i-1][0]+v[i][0];
    }
    for(int i=1;i<n;i++)
    {
        v1[0][i]=v1[0][i-1]+v[0][i];
    }
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            v1[i][j] = v[i][j]+min(v1[i-1][j],v1[i][j-1]);
        }
    }
    return v1[m-1][n-1];    
    }
};