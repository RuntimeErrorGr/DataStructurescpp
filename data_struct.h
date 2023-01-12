#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

template <class T>
class DataStruct {
    public:
        T* elems;
        int no_elems;
        DataStruct();
        DataStruct(T* elems, int no_elems);
        DataStruct(const DataStruct& ref_stack);
        virtual ~DataStruct();
        virtual void push(T elem)=0;
        virtual T pop();
        virtual void print(ostream& out_stream);
        virtual T* get_elems();
        virtual int get_no_elems();
    
    template <class U>
    friend ostream& operator<<(ostream& ofs, DataStruct<U>& data_struct);
};

