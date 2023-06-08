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
    int min_el = arr[0];
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        int diff = arr[i] - min_el;
        if (diff > profit)
        {
            profit = diff;
        }
        if (arr[i] < min_el)
        {
            min_el = arr[i];
        }
    }
    cout << profit;
}