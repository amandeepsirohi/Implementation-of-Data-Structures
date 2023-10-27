//uses 2  queues
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
class stacks{
    queue<int> q1 , q2;
    public:
        stacks ()
        {

        }
        void push(int x)
        {
            q2.push(x);
            while(!q1.empty())
            {
                int k = q1.front();
                q1.pop();
                q2.push(k);
            }
            swap(q1 , q2);
        }
        void pop()
        {
            if(q1.size() != 0)
            {
                cout << q1.front() << endl;
                q1.pop();
                return;
            }
            cout << "Stack is Empty";
            return;

        }
        void top()
        {
            if(q1.size() != 0)
            {
                cout << q1.front();
                q1.pop();
                return;
            }
            cout << "Empty stack " << endl;
            return;
        }
        void empty()
        {
            if(q1.size() != 0)
            {
                cout << "Not empty " << endl;
                return;
            }
            cout << "Empty" << endl;
            return;
        }
};
int main()
{
    stacks ss;
    ss.top();
    ss.empty();
    ss.push(11);
    ss.push(12);
    ss.top();
}