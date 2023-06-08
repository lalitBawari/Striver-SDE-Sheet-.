#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int count_zero = 0, count_one = 0, count_two = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            count_zero++;
        }
        else if (nums[i] == 1)
        {
            count_one++;
        }
        else
        {
            count_two++;
        }
    }
    int k = 0;
    for (int i = 0; i < count_zero; i++)
    {
        nums[k++] = 0;
    }
    for (int i = 0; i < count_one; i++)
    {
        nums[k++] = 1;
    }
    for (int i = 0; i < count_two; i++)
    {
        nums[k++] = 2;
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}
