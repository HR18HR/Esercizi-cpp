//
// Created by magazzinoproduzione on 15/05/2026.
//

#ifndef UNTITLED_SS_H
#define UNTITLED_SS_H
#include "Nodo.h"
template<class T>
class Nodo_1 {

public:
    Nodo_1(T x) {
        this->value=x;
        this->next=NULL;
        this->back=NULL;
    }
    T getValue() {
        return this->value;
    }

    Nodo_1<T>* getNext() {
        return this->next;
    }
    Nodo_1<T>* getBack() {
        return this->back;
    }
    void setNext(Nodo_1<T>* next) {
        this->next=next;
    }
    void setBack(Nodo_1<T>* back) {
        this->back=back;
    }


private:
    T value;
    Nodo_1<T>* next;
    Nodo_1<T>* back;
};
#endif //UNTITLED_SS_H
