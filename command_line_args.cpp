#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc , char *argv[])
{   for(int i = 0 ; i < argc ; i++)
    {
        cout << "arg[" << i << "]" << " " <<  argv[i] << endl;
    }
     int ans = 1;
    for(int i = 1 ; i < argc ; i++)
    {
        ans *= atoi(argv[i]);
    }
    cout << ans << endl;
    return 0;
    
}
