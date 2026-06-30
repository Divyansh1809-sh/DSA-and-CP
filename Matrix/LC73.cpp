#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> arr(m, vector<int>(n));

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> r;
    vector<int> c;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] == 0)
            {
                r.push_back(i);
                c.push_back(j);
            }
        }
    }

    for(int i = 0; i < m; i++)
    {
        if(find(r.begin(), r.end(), i) != r.end())
        {
            for(int j = 0; j < n; j++)
            {
                arr[i][j] = 0;
            }
        }
    }

    for(int j = 0; j < n; j++)
    {
        if(find(c.begin(), c.end(), j) != c.end())
        {
            for(int i = 0; i < m; i++)
            {
                arr[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}