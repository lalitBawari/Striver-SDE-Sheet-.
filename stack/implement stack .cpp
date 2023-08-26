#include <bits/stdc++.h>
using namespace std;
class Stack
{
private:
    int *arr, index, size;

public:
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        index = -1;
    }
    void push(int data)
    {
        if (index == size - 1)
        {
            cout << " full";
        }
        else
        {
            index++;
            arr[index] = data;
        }
    }
    int pop()
    {
        if (index == -1)
        {
            return -1;
        }
        else
        {
            index--;
        }
    }
    int top()
    {
        if (index == -1)
        {
            return -1;
        }
        else
        {
            return arr[index];
        }
    }
    bool isempty()
    {
        if (index == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    bool isfull()
    {
        if (index == size - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    Stack s(5);
    s.push(1);
    s.push(3);
    s.push(15);
    s.push(4);

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.isempty() << endl;
    cout << s.isfull() << endl;
}