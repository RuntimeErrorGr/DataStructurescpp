#include "data_struct.h"

using namespace std;

template <class T>
DataStruct<T>::DataStruct() {
    this->elems = NULL;
    this->no_elems = 0;
}

template <class T>
DataStruct<T>::DataStruct(T* elems, int no_elems) {
    this->no_elems = 0;
    this->elems = NULL;
    if (no_elems > 0) {
        this->no_elems = no_elems;
        this->elems = new T[no_elems];
        for (auto i = 0; i < this->no_elems; ++i)
            this->elems[i] = elems[i];
    }
}

template <class T>
DataStruct<T>::DataStruct(const DataStruct& ref_data_struct) {
    this->no_elems = 0;
    this->elems = NULL;
    if (ref_data_struct.no_elems > 0) {
        this->no_elems = ref_data_struct.no_elems;
        this->elems = new T[ref_data_struct.no_elems];
        for (auto i = 0; i < ref_data_struct.no_elems; ++i)
            this->elems[i] = ref_data_struct.elems[i];
    }

}

template <class T>
DataStruct<T>::~DataStruct() {
    if (this->elems)
        delete[] this->elems;
}

template <class T>
T DataStruct<T>::pop() {
    T top;
    if (this->no_elems && this->elems) {
        // exista cel putin 1 element, elems e alocat
        top = this->elems[0];
        T* aux_elems = new T[--this->no_elems];
        for (auto i = 0; i < this->no_elems; ++i)
            aux_elems[i] = this->elems[i + 1];
        delete[] this->elems;
        this->elems = new T[this->no_elems];
        for (auto i = 0; i < this->no_elems; ++i)
            this->elems[i] = aux_elems[i];
    }
    // nu exista niciun element, elems e null 
    return top;
}

template <class T>
void DataStruct<T>::print(ostream& out_stream) {
    out_stream << "Size of data struct: " << this->no_elems << endl;
    out_stream << "HEAD-> ";
    if (this->elems) {
        for (auto i = 0; i < this->no_elems; ++i)
            out_stream << this->elems[i] << " ";
    }
    out_stream << " <-TAIL" << endl;
}

template <class T>
T* DataStruct<T>::get_elems() {
    T* elems = new T[this->no_elems];
    for (auto i = 0; i < this->no_elems; ++i)
        elems[i] = this->elems[i];
    return elems;
}

template <class T>
int DataStruct<T>::get_no_elems() {
    return this->no_elems;
}

template <class T>
ostream& operator<<(ostream& ofs, DataStruct<T>& data_struct) { 
    data_struct.print(ofs);
    return ofs; 
}