#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2)
    {
        unordered_map<char,int>mp;
        unordered_map<char,int>mp1;
        for(int i=0;i<word1.length();i++)
        {
            mp[word1[i]]++;
        }
        for(int i=0;i<word2.length();i++)
        {
            mp1[word2[i]]++;
        }
        
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            if(mp1.count(it->first) == 0)
            return false;
        }

        for(auto it = mp1.begin(); it != mp1.end(); it++)
        {
            if(mp.count(it->first) == 0)
            return false;
        }
        vector<int> v1, v2;

        for(auto it = mp.begin(); it != mp.end(); it++)
            v1.push_back(it->second);

        for(auto it = mp1.begin(); it != mp1.end(); it++)
            v2.push_back(it->second);

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        return v1 == v2;
    }
};