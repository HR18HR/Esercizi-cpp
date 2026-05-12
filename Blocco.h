//
// Created by HAMZA on 02/05/26.
//

#ifndef CPP_BLOCCO_H
#define CPP_BLOCCO_H
#include <locale>

template<typename T>
class Blocco {
    public:
    Blocco(T value) {
        this->value = value;
        this->next =NULL;
    }
    T getvalue() {
        return this->value;
    }
    Blocco<T> *getnext() {
        return this->next;
    }
    void setnext(Blocco<T> *next) {
        this->next = next;
    }
    private:
    T value;
    Blocco<T> *next;
};









#endif //CPP_BLOCCO_H
