//
// Created by HAMZA on 16/05/26.
//

#ifndef CPP_KV_H
#define CPP_KV_H
template <class K, class V>
class KV {
    public:
    KV(K key, V value ) {
        this->key = key;
        this->value = value;

    }
     T getkey() {
        return this->key;
    }
    V getvalue() {
        return this->value;
    }
    void setvalue(V value) {
        this->value = value;
    }
    void setkey(K key) {
        this->key = key;
    }

private:
    K key;
    V value;
};





#endif //CPP_KV_H
