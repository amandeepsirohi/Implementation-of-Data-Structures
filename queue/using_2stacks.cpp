#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
class Queue{
        stack<int> s1 , s2;
    public:
        Queue (){

        }
        void push(int x)
        {
            while(!s1.empty())
            {
                int k = s1.top();
                s1.pop();
                s2.push(k);
            }
            s1.push(x);
            while(!s2.empty())
            {
                int k = s2.top();
                s2.pop();
                s1.push(k);
            }
        }  
        void isEmpty()
        {
            if(s1.empty())
            {
                cout << "Is Empty" << endl;
                return;
            }
            cout << "Not empty";
            return;
        }
        void pop()
        {
            if(s1.empty())
            {
                cout << "Nothing to pop" << endl;
                return;
            }
            int k = s1.top();
            cout << k << endl;
            s1.pop();
        }
        void peek()
        {
            if(!s1.empty())
            {
                cout << s1.top() << endl;
                return;
            }
            cout << "No peek";
            return;
        }
};
int main()
{
    Queue q1;
    q1.isEmpty();
    q1.peek();
    q1.push(22);
    q1.push(2);
    q1.peek();
}