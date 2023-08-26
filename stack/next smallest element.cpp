#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // brute  approch
    // vector<int> ans;
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     int x = -1;
    //     for (int j = i - 1; j >= 0; j--)
    //     {
    //         if (arr[j] < arr[i])
    //         {
    //             x = arr[j];
    //             break;
    //         }
    //     }
    //     ans.push_back(x);
    // }
    // for (int i = ans.size() - 1; i >= 0; i--)
    // {
    //     cout << ans[i] << " ";
    // }

    // optimal approch   using stack
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[i] < arr[st.top()])
        {
            arr[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        arr[st.top()] = -1;
        st.pop();
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}