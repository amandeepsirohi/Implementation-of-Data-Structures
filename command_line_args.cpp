#include <iostream>
#include <bits/stdc++.h>

//multiply numbers given through command line

using namespace std;

int main(int argc , char *argv[])
{   for(int i = 0 ; i < argc ; i++)
    {
        cout << "arg[" << i << "]" << " " <<  argv[i] << endl;
    }
    double ans = 0;
    for(int i = 1 ; i < argc ; i++)
    {
        ans += atof(argv[i]);
    }
    cout << "Sum is " <<  ans << endl;
    return 0;
    
}
