//
// Created by HAMZA on 16/05/26.
//

#ifndef CPP_ALBERO_H
#define CPP_ALBERO_H
#include <iostream>

#include "Nodo_2.h"
#include "ss.h"
#include <random>

template < typename T >
class Albero {
    public:
    Albero() {
        this->head=NULL;
    }

    void Push(T x) {
        if (head == NULL) {
            head=new Nodo_2<T>(x);
        }
        else {
            if (rand()%2) {
                Nodo_2<T> *aux = new Nodo_2<T>(x);
                aux->setNext(head,NULL);
                head=aux;
            }
            else {
                Nodo_2<T> *aux = new Nodo_2<T>(x);
                aux->setNext(NULL,head);
                head=aux;
            }

        }
    }

        void Print(){
            this->Print_1(head);
        }


private:
    Nodo_2<T> * head;


void Print_1(Nodo_2<T>* nodo) {
    if (nodo == NULL) {
        return;
    }

    Print_1(nodo->getLeft());
    std::cout << nodo->getData() << " ";
    Print_1(nodo->getRight());
}
};
#endif //CPP_ALBERO_H
