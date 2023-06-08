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
    int idx1 = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            idx1 = i;
            break;
        }
    }
    if (idx1 == -1)
    {
        reverse(arr, arr + n);
    }

    for (int i = n - 1; i > idx1; i--)
    {
        if (arr[i] > arr[idx1])
        {
            swap(arr[i], arr[idx1]);
            break;
        }
    }
    reverse(arr + idx1 + 1, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}