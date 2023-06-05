#ifndef ARRAY_H
#define ARRAY_H

#include <cstddef>
#include <vector>

template <class T, size_t Size>
class Array
{
    private:
        size_t size;
        T arr[Size];

    public:
        Array();
        T &operator[](size_t index);
        size_t size();
};

template <class T, size_t Size>
Array<T, Size>::Array()
{
    return;
}

template <class T, size_t Size>
T &Array<T, Size>::operator[](size_t index)
{
    return this->arr[index];
}

template <class T, size_t Size>
size_t Array<T, Size>::size()
{
    return this->size;
}

#endif