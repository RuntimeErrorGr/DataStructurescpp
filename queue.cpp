#include "queue.h"

using namespace std;

template <class T>
queue::Queue<T>::Queue() : DataStruct<T>() {}

template <class T>
queue::Queue<T>::Queue(T* elems, int no_elems) : DataStruct<T>(elems, no_elems) {}

template <class T>
queue::Queue<T>::Queue(const Queue& ref_queue) :  DataStruct<T>(ref_queue) {}

template <class T>
queue::Queue<T>::~Queue() {}

template <class T>
void queue::Queue<T>::push(T elem) {
    if (this->elems) {
        // exista cel putin 1 element, elems e alocat
        T* aux_elems = new T[this->no_elems];
        for (auto i = 0; i < this->no_elems; ++i)
            aux_elems[i] = this->elems[i];
        delete[] this->elems;
        this->elems = new T[++this->no_elems];
        for (auto i = 0; i < this->no_elems - 1; ++i)
            this->elems[i] = aux_elems[i];
        delete[] aux_elems;
        this->elems[this->no_elems - 1] = elem;
    } else {
        // nu exista niciun element, elems e null
        this->elems = new T[++this->no_elems];
        this->elems[0] = elem;
    }
}

template <class T>
T queue::Queue<T>::pop() {
    return DataStruct<T>::pop();
}

template <class T>
void queue::Queue<T>::print(ostream& out_stream) {
    DataStruct<T>::print(out_stream);
}

template <class T>
T* queue::Queue<T>::get_elems() {
    return DataStruct<T>::get_elems();
}

template <class T>
int queue::Queue<T>::get_no_elems() {
    return DataStruct<T>::get_no_elems();
}
