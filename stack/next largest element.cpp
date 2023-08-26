#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // brute approch
    // vector<int> ans;
    // for (int i = 0; i < n; i++)
    // {
    //     int x = -1;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (v[j] > v[i])
    //         {
    //             x = v[j];
    //             break;
    //         }
    //     }
    //     ans.push_back(x);
    // }
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    // optimal approch   using stack
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && v[i] > v[s.top()])
        {
            v[s.top()] = v[i];
            s.pop();
        }
        s.push(i);
    }
    while (!s.empty())
    {
        v[s.top()] = -1;
        s.pop();
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}