//included custom header
#include "string.h"


int main()
{   char arr[] = "abcd"; 
    String str(arr);

    cout << str.Length() << endl;

    cout << str;

    cout << str[2] << endl;

    String gg(str);

    cout << gg;
}
