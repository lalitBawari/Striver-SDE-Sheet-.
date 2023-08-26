#include <bits/stdc++.h>
using namespace std;
class stack
{
private:
    stack<int> s1, s2;

public:
    void push(int x)
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    int pop()
    {
        int x = s1.top();
        s1.pop();
        return x;
    }
    int top()
    {
        return s1.top();
    }
};
int main()
{
    stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.top();
}
