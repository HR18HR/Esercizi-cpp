
#include <iostream>
#include <cassert>
#include <cstring>
#include <vector>
#include "SD.h"
#include "lista_1.h"



int main()
{
    lista_1<int> s=lista_1<int>();
    s.push_front(1);
    s.push_front(2);
    s.push_front(3);
    s.push_front(4);
    s.push_front(5);
    s.Print();
    std::cout<<"\n";
    std::cout <<s.getBack(5);


    return 0;

}