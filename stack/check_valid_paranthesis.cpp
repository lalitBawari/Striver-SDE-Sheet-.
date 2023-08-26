#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    // brute approch
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if ((s[i] == '(' && s[j] == ')') or (s[i] == '[' && s[j] == ']') or (s[i] == '{' && s[j] == '}'))
    //         {
    //             cout << "true";
    //             return 0;
    //         }
    //     }
    // }
    // cout << "false";

    //  optimal approch using stack
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' or s[i] == '{' or s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            char ch = st.top();
            st.pop();
            if (!st.empty() or (ch == '(' && s[i] != ')') or (ch == '[' && s[i] != ']') or (ch == '{' && s[i] != '}'))
            {
                cout << "false";
                return 0;
            }
        }
    }
    if (st.empty())
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}