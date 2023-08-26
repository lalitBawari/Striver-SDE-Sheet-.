#include <bits/stdc++.h>
using namespace std;
class Stack
{
    int *arr, index, size;

public:
    Stack(int k)
    {
        size = k;
        arr = new int[size];
        index = -1;
    }
    void push(int val)
    {
        if (index == size - 1)
        {
            return;
        }
        else
        {
            index++;
            arr[index] = val;
        }
    }
    int pop()
    {
        int ans = -1;
        if (index == -1)
        {
            return -1;
        }
        else
        {
            ans = arr[index];
            index--;
        }
        return ans;
    }
};
int main()
{
    Stack s(5);
    s.push(1);
    s.push(1);
    s.push(1);
    s.push(1);
    cout << s.pop() << " ";
}