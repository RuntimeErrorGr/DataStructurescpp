#include "stack.h"

using namespace std;

template <class T>
stack::Stack<T>::Stack() : DataStruct<T>() {}

template <class T>
stack::Stack<T>::Stack(T* elems, int no_elems) : DataStruct<T>(elems, no_elems) {}

template <class T>
stack::Stack<T>::Stack(const Stack& ref_stack) :  DataStruct<T>::DataStruct(ref_stack) {}

template <class T>
stack::Stack<T>::~Stack() {}

template <class T>
void stack::Stack<T>::push(T elem) {
    if (this->elems) {
        // exista cel putin 1 element, elems e alocat
        T* aux_elems = new T[this->no_elems];
        for (auto i = 0; i < this->no_elems; ++i)
            aux_elems[i] = this->elems[i];
        delete[] this->elems;
        this->elems = new T[++this->no_elems];
        for (auto i = 0; i < this->no_elems - 1; ++i)
            this->elems[i + 1] = aux_elems[i];
        delete[] aux_elems;
        this->elems[0] = elem;
    } else {
        // nu exista niciun element, elems e null
        this->elems = new T[++this->no_elems];
        this->elems[0] = elem;
    }
}

template <class T>
T stack::Stack<T>::pop() {
    return DataStruct<T>::pop();
}

template <class T>
void stack::Stack<T>::print(ostream& out_stream) {
    DataStruct<T>::print(out_stream);
}

template <class T>
T* stack::Stack<T>::get_elems() {
    return DataStruct<T>::get_elems();
}

template <class T>
int stack::Stack<T>::get_no_elems() {
    return DataStruct<T>::get_no_elems();
}
