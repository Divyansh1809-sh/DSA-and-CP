#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& v)
    {
        int n=v.size();
        vector<int>l(n),r(n);
		
		l[0]=v[0];
		for(int i=1; i<n; i++)
		{
			l[i]=max(l[i-1],v[i]);
		}
		r[n-1]=v[n-1];

		for(int i=n-2;i>=0;i--)
		{
			r[i]=max(r[i+1],v[i]);
		}
		int ans = 0;

        for(int i=0;i<n;i++)
        {
            ans+=min(l[i],r[i])-v[i];
        }
        return ans;
    }
};