#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        vector<int> v(i + 1, 1);
        for (int j = 1; j < i; j++)
        {
            v[j] = ans[i - 1][j] + ans[i - 1][j - 1];
        }
        ans.push_back(v);
    }
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            cout << " ";
        }

        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}