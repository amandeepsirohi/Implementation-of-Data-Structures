//uses single queue
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
class Stack{
        queue<int> q;
    public:
        Stack()
        {

        }
        void push(int x)
        {
            q.push(x);
            int k = q.size() -1;
            while(k--)
            {
                q.push(q.front());
                q.pop();
            }
        }
        void pop()
        {
            if(q.size() == 0)
            {
                cout << "Nothing to pop" << endl;
                return;
            }
            cout << q.front() << endl;
            return;
        }
        void top()
        {
            if(q.size() == 0)
            {
                cout << "Nothing top" << endl;
                return;
            }
            cout << q.front() << endl;
            return;
        }
};
int main()
{
    Stack ss;
    ss.top();
    ss.pop();
    ss.push(11);
    ss.push(3);
    ss.push(1);
    ss.top();
}