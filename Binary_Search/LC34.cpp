#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& n, int target)
    {
        int ff=-1;
        int lf=-1;
        for(int i=0;i<n.size();i++)
        {
            if(target==n[i])
            {
                ff=i;
                break;
            }
        } 
        if(ff==-1)
        {
            return {-1,-1};
        }
        for(int i = ff; i < n.size(); i++) {
            if(n[i] == target)
                lf = i;
            else
                break;
        }
        vector<int>o(2);
        o[0]=ff;
        o[1]=lf;
        return o;
    }
};