//
// Created by magazzinoproduzione on 14/05/2026.
//
#include <iostream>
#include "Nodo.h"

template <class T>
class Stack{
public:
        Stack(){};
        void push(T x) {
            Nodo<T>* top=head;
            if (top==nullptr) head=new Nodo<T>(x);
            else{
                while (top->getNext()!=nullptr) {
                    top=top->getNext();
                }
                Nodo<T>* temp=new Nodo<T>(x);
                top->setNext(temp);

            }
        }

    int size() {
            Nodo<T>* temp=head;
            int size=0;
            while (temp!=nullptr) {
                size++;
                temp=temp->getNext();
            }
            return size;
        }


    void Print() {
            if (head==nullptr) return;
            Nodo<T>* temp=head;
            while (temp!=nullptr) {
                std:: cout << "[" <<temp->getValue() << "]->";
                temp=temp->getNext();
            }
        }

private:
    Nodo<T> *head=nullptr;

};

