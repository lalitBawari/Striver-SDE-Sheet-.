#include <bits/stdc++.h>
using namespace std;
class Queue
{
private:
    int *arr, front, size, rear;

public:
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    void push(int data)
    {
        if (rear == size - 1)
        {
            cout << "queue is full";
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }
    int pop()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[front];
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }
    int top()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    bool isempty()
    {
        if (front == rear)
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
        if (rear == size - 1)
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
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;
    q.pop();
}