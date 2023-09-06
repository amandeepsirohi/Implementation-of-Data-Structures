#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
class abc 
{
    int **p;
    int d1 , d2;
    public:
        abc(int , int);
        void get_element(int i , int j , int value)
        {
            p[i][j] = value;
        }
        int & put_value(int i , int j)
        {
            return p[i][j];
        }
        ~abc();
};
abc::~abc()
{
    for(int i = 0 ; i < d1 ; i++)
    {
        delete p[i];
    }
    delete p;
}
abc::abc(int x , int y)
{
    d1 = x;
    d2 = y;
    p = new int *[d1];
    for(int i = 0 ; i< d1 ; i++)
    {
        p[i] = new int[d2];
    }
}


int main()
{  
    int d1 , d2;
    cout << "enter dimmension of matrix ";
    cin >> d1 >> d2;
    abc matrix(d1 , d2);
    int value;
    for(int i = 0 ; i < d1 ; i++)
    {
        for(int j = 0 ; j < d2 ; j++)
        {
            cin >> value;
            matrix.get_element(i , j , value);
        }
    }
    for(int i = 0 ; i < d1 ; i++)
    {
        for(int j = 0 ; j < d2 ; j++)
        {
            cout << matrix.put_value(i , j) << " ";
        }
        cout << endl;
    }
}