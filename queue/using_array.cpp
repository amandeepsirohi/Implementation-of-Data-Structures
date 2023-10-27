#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
class Queue{
        int *arr;
        int size , top , capacity;
    public:
        Queue(int k)
        {
            arr = new int[k];
            size = k;
            capacity = 0 , top = 0;
        }
        void isEmpty()
        {
            if(top == capacity)
            {
                cout << "isEmpty" << endl;
                return;
            }
            return;
        }
        void push(int x)
        {
            if(size == capacity)
            {
                cout << "queue is full";
                return;
            }
            arr[capacity] = x;
            capacity += 1;
        }
        void dequeue()
        {
            if(top == capacity)
            {
                cout << "isEmpty No top" << endl;
                return;
            }
            cout << "top is " << arr[top] << endl;
            top += 1;
            return;
        }
};
int main()
{
    Queue q(10);
    q.isEmpty();
    q.push(11);
    q.push(22);
    q.isEmpty();
    q.dequeue();
    
}