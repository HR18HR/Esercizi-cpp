//
// Created by magazzinoproduzione on 15/05/2026.
//

#ifndef UNTITLED_LISTA_1_H
#define UNTITLED_LISTA_1_H
#include <iosfwd>
#include <iostream>

#include "ss.h"

template<class T>
class lista_1 {
public:
    lista_1(){};

    void push_front(T x) {
        Nodo_1<T>* temp=new Nodo_1<T>(x);
        if (head==nullptr){
            temp->setNext(nullptr);
            temp->setBack(head);
            head=temp;
      }
        else {
            temp->setNext(head);
            temp->setBack(head);
            head=temp;
        }
    }
    void Print() {
        Nodo_1< T >* temp=head;
        while(temp!=nullptr) {
            std::cout<<temp->getValue()<<" ";
            temp=temp->getNext();
        }
    }

        T getBack(T x){
            Nodo_1< T >* temp=head;
            if (head==nullptr) return -1;
            while(temp->getValue()!=x) {
                temp=temp->getNext();
            }
        return temp->getBack()->getValue();
        }





private:
    Nodo_1<T>* head=nullptr;
};



#endif //UNTITLED_LISTA_1_H
