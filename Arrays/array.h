#include <iostream>
/*
 size_t in C++ is the type returned by the sizeof operator and is frequently used 
 in the standard library to describe sizes and counts.*/
/*added typename T to make it a general array*/
template<typename T , size_t S>

class array
{
    private:
        T arr_data[S];
    public:
        constexpr int Size() const
        {   /*make const expr because we can use the size value at compile time or the value 
            returned by this fuction to create a new array*/
            /*While returning size we are not creating a new var of storing size . we 
            are just returning the template argument S , which has a fixed value  */
            return S;
        }

        T& operator [] (size_t index)
        {
            if((index > S))
            {
                throw("Size overFlow");
            }
            return arr_data[index];
        }

        /*If array is declared const*/
        const T& operator [] (size_t index) const
        {
            if((index > S))
            {
                throw("Size overFlow");
            }
            return arr_data[index];
        }

        T* Data() {return arr_data;}

        /*if array defined constant*/
        const T* Data() const {return arr_data;}
};
