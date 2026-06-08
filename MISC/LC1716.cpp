#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalMoney(int n)
    {
        int w=1;
        int now=n/7;
        int dl=n%7;
        int sum=0;
        for(int i=1;i<=now;i++)
        {
            int s=w;
            for(int j=1;j<=7;j++)
            {
                sum+=s;
                s++;
            }
            w++;
        }
        for(int i=1;i<=dl;i++)
        {
            sum+=w;
            w++;
        }
        return sum;
    }
};