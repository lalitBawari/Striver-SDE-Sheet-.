#include <bits/stdc++.h>
using namespace std;
// using recurssion             brute   t.c- exponential   s.c-0(n+m)
// int distance(int i, int j, string s1, string s2)
// {
//     if (i < s1.size() || j < s2.size())
//     {
//         return max(i, j) + 1;
//     }
//     if (s1[i] == s2[j])
//     {
//         return 0 + distance(i - 1, j - 1, s1, s2);
//     }
//     else
//     {
//         return 1 + min((distance(i, j - 1, s1, s2)), min(distance(i - 1, j, s1, s2), distance(i - 1, j - 1, s1, s2)));
//     }
// }

// using dp

int main()
{
    string s1, s2;
    cin >> s2 >> s2;
    cout << distance(s1.size() - 1, s2.size() - 1, s1, s2);
}