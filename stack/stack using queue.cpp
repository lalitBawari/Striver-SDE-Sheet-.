#include <bits/stdc++.h>
using namespace std;
class Stack
{
private:
    queue<int> q1, q2;

public:
    // using two queue approch
    void push(int data)
    {
        q1.push(data);
        while (!q2.empty())
        {
            q1.push(q2.front());
        }
        swap(q1, q2);
    }
    int pop()
    {
        int ans = q2.front();
        q2.pop();
        return ans;
    }
    int top()
    {
        return q2.front();
    }
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << s.top() << " ";
}
