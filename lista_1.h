//
// Created by magazzinoproduzione on 15/05/2026.
//

#ifndef UNTITLED_LISTA_1_H
#define UNTITLED_LISTA_1_H
#include <iosfwd>
#include <iostream>
#include "ss.h"
#include <string>
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define WHITE   "\033[33m"

template<class T>
class lista_1 {
public:
    lista_1(){};

    void push_front(T x) {
        Nodo_1<T>* temp=new Nodo_1<T>(x);
        if (head==NULL){
            temp->setNext(NULL);
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
       int i = 1;
        Nodo_1< T >* temp=head;
        while(temp!=NULL) {
            std::string s=std::to_string(i);
            std::cout << "\033[38;5;"+s+"m"<<temp->getValue()<< WHITE << "-----";
            temp=temp->getNext();
            ++i;
        }
    }

        T getBack(T x){
            Nodo_1< T >* temp=head;
            if (head==NULL) return -1;
            while(temp->getValue()!=x) {
                temp=temp->getNext();
            }
        return temp->getBack()->getValue();
        }





private:
    Nodo_1<T>* head=NULL;
};



#endif //UNTITLED_LISTA_1_H
