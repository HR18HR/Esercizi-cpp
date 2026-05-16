//
// Created by HAMZA on 16/05/26.
//

#ifndef CPP_NODO_2_H
#define CPP_NODO_2_H
#include <cstddef>

template <typename T>
class Nodo_2{

  public:
     Nodo_2(T x) {
         this->data=x;
         this->left=NULL;
         this->right=NULL;
     }
     T getData() {
         return this->data;
     }
     Nodo_2<T> * getRight() {
         return this->right;
     }
    Nodo_2<T> * getLeft() {
         return this->left;
     }
     void setNext(Nodo_2<T> * right, Nodo_2<T> * left) {
         this->right=right;
         this->left=left;
     }


 private:
     T data;
     Nodo_2<T> * right;
     Nodo_2<T> * left;

 };






#endif //CPP_NODO_2_H
