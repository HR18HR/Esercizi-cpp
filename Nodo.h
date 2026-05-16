//
// Created by magazzinoproduzione on 14/05/2026.
//

#ifndef UNTITLED_NODO_H
#define UNTITLED_NODO_H


template<class T>
class Nodo {
        public:
        Nodo(T value) {
            this->value = value;
            this->next = NULL;
        };

        void setNext(Nodo<T> *nodo) {
            this->next = nodo;
        }
        Nodo<T> *getNext() {
            return this->next;
        }
        T getValue() {
            return this->value;
        }


    private:
        T value;
        Nodo<T> *next;
    };










#endif //UNTITLED_NODO_H
