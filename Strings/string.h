#include <iostream>
#include <cstring>
using namespace std;

class String 
{
    private:
        char *str;
    public:
        
        //constructor with no args
        String();

        //constructor with one arg
        String(char *val);

        //copy constructor
        String(const String &source);

        //length of string
        int Length();

        //character at particular index
        char operator [](int index);

        // Prototype for stream insertion
        friend ostream&operator<<(ostream& os,const String& obj);
 
        // Prototype for stream extraction
        friend istream& operator>>(istream& is,String& obj);

        //destructor
        ~String()
        {
            delete str;
        }
};

String :: String()
{
    str = new char[1];
    str[0] = '\0';
}

String :: String(char *val)
{
    if(val == nullptr)
    {
        str = new char[1];
        str[0] = '\0';
    }
    else{
        str = new char[strlen(val) + 1];
        strcpy(str , val);
        str[strlen(val)] = '\0';
    }
}

int String :: Length()
{
    return strlen(str);
}

char String :: operator[](int index)
{   
    return str[index];
}


String :: String(const String &gg)
{
    str = new char[strlen(gg.str) + 1];
    strcpy(str , gg.str);
    str[strlen(gg.str)] = '\0';
}

istream& operator>>(istream& is,
                    String& obj)
{
    char* buff = new char[1000];
    memset(&buff[0], 0, sizeof(buff));
    is >> buff;
    obj = String{ buff };
    delete[] buff;
    return is;
}
 
// Overloading the stream
// insertion operator
ostream& operator<<(ostream& os,
                    const String& obj)
{
    os << obj.str << endl;
    return os;
}