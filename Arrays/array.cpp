#include "array.h"

using namespace std; 

int main()
{   
    const int size = 5;
    array<int , size> arr;

    /*Value returned by Size() used at compile time , only possible if declared constexpr*/
    array<int , arr.Size()> new_arr;
    
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[4] = 5;
    arr[5] = 5;
    for(size_t i = 0 ; i < arr.Size() ; i++)
    {
        cout << arr[i] << endl;
    }

    array<std::string , size> str_arr;
    for(size_t i = 0 ; i < str_arr.Size() ; i++)
    {
        std::string gg;
        cin >> gg;
        str_arr[i] = gg;
    }

    for(size_t i = 0 ; i < str_arr.Size() ; i++)
    {
        cout << str_arr[i] << endl;
    }
}