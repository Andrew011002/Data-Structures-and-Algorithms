#ifndef STATIC_ARRAY_HPP
#define STATIC_ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

struct StaticArray {
    private:
        int* arr_ptr;
        int* ptr;
        int nelem;
        int cap;


    public:
        StaticArray(int capacity);
        StaticArray(int array[], int size, int capacity);
        int get(int index);
        void write(int index, int elem);
        void append(int elem);
        void insert(int index, int elem);
        void remove(int elem);
        int pop();
        int size();
        int capacity();
        bool empty();
        bool full();
        void clear();
        void print();
};

#endif