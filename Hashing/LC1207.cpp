#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,1,1,2,2,3};
    unordered_map<int,int> mp;
    
    for(int x : arr)
            mp[x]++;
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }
    set<int> s;
    for(auto it:mp)
    {
        if(s.count(it.second))
        return false;
        else
        s.insert(it.second);
    }
    return true;
}