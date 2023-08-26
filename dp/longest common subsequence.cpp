#include <bits/stdc++.h>
using namespace std;
// using recurssion      brute approch
// int LCA(int i, int j, string s1, string s2)
// {
//     if (i == s1.size() or j == s2.size())
//     {
//         return 0;
//     }
//     else if (s1[i] == s2[j])
//     {
//         return 1 + LCA(i + 1, j + 1, s1, s2);
//     }
//     else
//     {
//         return max(LCA(i + 1, j, s1, s2), LCA(i, j + 1, s1, s2));
//     }
// }

// better approch          memorization
int LCA(int i, int j, string s1, string s2, vector<vector<int>> &dp)
{
    if (i == s1.size() or j == s2.size())
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    if (s1[i] == s2[j])
    {
        return dp[i][j] = 1 + LCA(i + 1, j + 1, s1, s2, dp);
    }
    else
    {
        return dp[i][j] = max(LCA(i + 1, j, s1, s2, dp), LCA(i, j + 1, s1, s2, dp));
    }
}

// using dp               bottom up approch   best approch
// void Lca(string s1, string s2)
// {
//     int n = s1.size(), m = s2.size();
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             if (s1[i - 1] == s2[j - 1])
//             {
//                 dp[i][j] = 1 + dp[i - 1][j - 1];
//             }
//             else
//             {
//                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//             }
//         }
//     }
//     cout << dp[n][m];
// }
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    // cout << LCA(0, 0, s1, s2);          //recurssion
    //     Lca(s1, s2);                        //bottom up approch

    vector<vector<int>> dp(s1.size(), vector<int>(s2.size(), -1));
    cout << LCA(0, 0, s1, s2, dp);
}