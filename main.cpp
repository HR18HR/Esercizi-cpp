
#include <iostream>
#include <cassert>
#include <cstring>
#include <vector>
#include "albero.h"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define WHITE   "\033[33m"


int main()
{
    Albero<int> albero;
    albero.Push(20);
    albero.Push(10);
    albero.Push(5);
    albero.Push(3);
    albero.Push(1);
    albero.Push(2);
    albero.Push(4);
    albero.Print();

}