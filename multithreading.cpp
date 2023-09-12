#include <thread>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void fun(int x)
{
    cout << "value of x is " << x << endl;
}

int main()
{
    thread t1(fun , 1);
    thread t2(fun , 2);

    t2.join();
    t1.join();
}