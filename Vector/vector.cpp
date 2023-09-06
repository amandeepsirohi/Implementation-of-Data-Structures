#include "vector.h"

int main()
{
    Vector<int> ans;
    ans.Push_back(2);
    ans.Push_back(23);
    ans.Push_back(44);
    ans.Push_back(22);
    ans.Print_Vector();

    ans.Clear();

    ans.Print_Vector();

    Vector<string> str_vec;

    str_vec.Push_back("aaa");
    str_vec.Push_back("aaa");
    str_vec.Push_back("aaa");
   str_vec.Print_Vector();
   str_vec.Pop_back();
   str_vec.Print_Vector();
}