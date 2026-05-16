
#include <iostream>
#include <cassert>
#include <cstring>
#include <vector>
#include "SD.h"
#include "lista_1.h"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define WHITE   "\033[33m"


int main()
{

    lista_1<int>lista = lista_1<int>();
    lista.push_front(20);
    lista.push_front(30);
    lista.push_front(40);
    lista.push_front(50);
    lista.push_front(60);
    lista.push_front(70);
    lista.push_front(80);
    lista.push_front(90);
    lista.push_front(100);
    lista.push_front(120);
    lista.push_front(130);
    lista.push_front(140);
    lista.push_front(150);
    lista.Print();
}