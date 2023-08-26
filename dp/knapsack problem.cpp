#include <bits/stdc++.h>
using namespace std;
// using recurssion
// int knapsack(int W, int n, vector<int> val, vector<int> wt)
// {
//     if (n == 0 || W == 0)
//     {
//         return 0;
//     }
//     if (wt[n - 1] <= W)
//     {
//         return max(val[n - 1] + knapsack(W - wt[n - 1], n - 1, val, wt), knapsack(W, n - 1, val, wt));
//     }
//     else
//     {
//         return knapsack(W, n - 1, val, wt);
//     }
// }

// using dp memorization
int knapsack(int W, int n, vector<int> val, vector<int> wt, vector<vector<int>> &dp)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    if (dp[n][W] != -1)
    {
        return dp[n][W];
    }
    if (wt[n - 1] <= W)
    {
        return dp[n][W] = max(val[n - 1] + knapsack(W - wt[n - 1], n - 1, val, wt, dp), knapsack(W, n - 1, val, wt, dp));
    }
    else
    {
        return dp[n][W] = knapsack(W, n - 1, val, wt, dp);
    }
}
int main()
{
    int n, W;
    cin >> n >> W;
    vector<int> val(n), wt(n);
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }
    // cout << knapsack(W, n, val, wt);
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));
    cout << knapsack(W, n, val, wt, dp);
}