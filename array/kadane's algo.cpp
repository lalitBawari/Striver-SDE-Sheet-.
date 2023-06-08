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
    // brute approch
    // int max_el = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += arr[j];
    //         if (sum > max_el)
    //         {
    //             max_el = sum;
    //         }
    //     }
    // }
    // cout << max_el;

    int max_el = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > max_el)
        {
            max_el = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << max_el;
}