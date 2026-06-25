#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& n)
    {
        sort(n.begin(),n.end());
        return n[0];  
    }
};