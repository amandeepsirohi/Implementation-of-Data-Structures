#include <iostream>

using namespace std;

template<typename T> 

class Vector
{
    private:
        //Initialize heap memory for vector class (pointer to heap memory)
        T *vector_data = nullptr;

        //Initial size of vector
        size_t vector_size = 0;

        //initial capacity of vector
        size_t vector_capacity = 3;

        //if vector full or initialized first time then reallocate memory
        void Realloc(size_t newCapacity)
        {   
            //if we are downsizing vector then this need to be checked
            
            size_t size = vector_size;
            if(size > newCapacity)
            {
                size = newCapacity;
            }

            // 1. Allocate a new chunk of memory
            // 2. Copy or move old elements from old vector to new one
            // 3. Delete old vector

            T* new_vector = new T[newCapacity];

            for(int i = 0 ; i < vector_size ; i++)
            {
                new_vector[i] = vector_data[i];
            }

            delete [] vector_data;
            vector_data = new_vector;
            vector_capacity = newCapacity;
        }
    public:
        Vector()
        {   //allocate 3 elements in vector
            Realloc(3);

        }

        // Pushback in vector
        void Push_back(const T &val)
        {
            if(vector_size >= vector_capacity)
            {   /*If vector size full then increase size of vector by 50%*/
                Realloc(vector_capacity + vector_capacity / 2);
            }
            vector_data[vector_size] = val;
            vector_size += 1;
        }
        

        //pop back from vector
        void Pop_back()
        {
            if(vector_size > 0)
            {
                vector_size -= 1;
                //Manually calling destructor 
                vector_data[vector_size].~T();
            }
        }
        
        //Clear the Vector
        void Clear()
        {
            for(size_t i = 0 ; i < vector_size ; i++)
            {   //Manually calling destructor for each element
                vector_data[i].~T();
            }
            vector_size = 0;
        }

        //Size of vector
        size_t Size() const {return vector_size;}

        //subscript operator for accessing at any index
        //non const version so we can modify data
        T& operator [](size_t index) 
        {
            if(index >= vector_capacity)
            {
                cout << "Out of Bound Index" << endl;
                return NULL;
            }
            return vector_data[index];
        }

        //subscript operator for accessing at any index
        // const version so we can't modify data
        const T& operator [](size_t index) const
        {
            if(index >= vector_capacity)
            {
                cout << "Out of Bound Index" << endl;
                return NULL;
            }
            return vector_data[index];
        }

        //Print the vector
        void Print_Vector()
        {
            for(int i = 0 ; i< vector_size ; i++)
            {
                cout << vector_data[i] << " ";
            }
            cout << endl;
        }

        //Destructor
        ~Vector()
        {
            delete []vector_data;
        }
};