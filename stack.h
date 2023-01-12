#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

#include "data_struct.h"

using namespace std;


namespace stack {

    template <class T>
    class Stack : public DataStruct<T>::DataStruct {
        public:
            Stack();
            Stack(T* elems, int no_elems);
            Stack(const Stack& ref_stack);
            ~Stack();
            void push(T elem) override;
            T pop() override;
            void print(ostream& out_stream) override;
            T* get_elems() override;
            int get_no_elems() override;
    };
}
