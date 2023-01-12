#pragma once
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "data_struct.h"

using namespace std;


namespace queue {
    
    template <class T>
    class Queue : public DataStruct<T>::DataStruct {
        public:
            Queue();
            Queue(T* elems, int no_elems);
            Queue(const Queue& ref_queue);
            ~Queue();
            Queue* clone() const;
            void push(T elem) override;
            T pop() override;
            void print(ostream& out_stream) override;
            T* get_elems() override;
            int get_no_elems() override;
    };

}
