#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
class Stack{
        int *arr;
        int size;
        int capacity;
    public:
        Stack(int s)
        {
            capacity = s;
            size = 0;
            arr = new int[s];
        }
        Stack()
        {
            capacity = 0;
            size = 0;
            arr = new int[size];
        }
        void push(int k)
        {
            if(capacity < size)
            {
                cout << "Size of stack is full" << endl;
                return;
            }
            arr[size] = k;
            size+= 1;
        }
        void pop()
        {
            if(size == 0){
                cout << "Empty !! Nothing to pop";
                return;
            }
            cout << arr[size] << endl;
            size -=1;
        }
        void top()
        {
            if(size == 0)
            {
                cout << "Empty !!";
                return;
            }
            cout << arr[size] <<endl;
        }
        void isEmpty()
        {
            if(size == 0)
            {
                cout << "Is empty";
                return;
            }
            cout << "Not empty" << endl;
            return;
        }
        void isFull()
        {
            if(size == capacity)
            {
                cout << "stack is full";
                return;
            }
            cout << "Not full" << endl;
            return;
        }

};
int main()
{
    Stack ss(2);
    ss.push(1);
    ss.isEmpty();
    ss.isFull();
    ss.push(111);
    ss.top();
    ss.isFull();
}