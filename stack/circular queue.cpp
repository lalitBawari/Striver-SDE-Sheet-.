#include <bits/stdc++.h>
using namespace std;
class Queue
{
    int *arr, front, rear, size;

public:
    Queue(int k)
    {
        size = k;
        arr = new int[size];
        front = rear = -1;
    }
    void push(int val)
    {
        if ((front == 0 && rear == size - 1) || ((rear + 1) % size == front))
        {
            return;
        }
        else if (front == -1)
        {
            front = 0;
            rear = 0;
            arr[rear] = val;
        }
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = val;
        }
    }
    int pop()
    {
        if (front == -1)
        {
            return -1;
        }
        int ans = arr[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
        return ans;
    }
};
int main()
{
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << q.pop() << " ";
    cout << q.pop() << " ";
    cout << q.pop() << " ";
    cout << q.pop() << " ";
    cout << q.pop() << " ";
}