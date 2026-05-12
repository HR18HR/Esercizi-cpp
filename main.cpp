#include <iostream>
#include <vector>
#include <sstream>
#include <exception>
#include <fstream>
#include <list>
#include "html.h"

#include "Blocco.h"

void parsehtml(std::ifstream &file,std::list<html> & lista) {

        char c ;
        file >> c;
        if (c!='<') return;
        file.putback(c);

        while (!file.eof()) {
                std::string v,k,l;
                getline(file,v,'>');
                getline(file,k,'<');
                getline(file,l,'>');
                lista.push_back({"",k,""});


        }




}


int main() {
        std::ifstream f("/Users/hamza/Desktop/cpp/test.txt");
        std::list<html> lista;
        if (!f.is_open()) return 1;
        parsehtml(f,lista);
         for (auto e :lista) {
                 std::cout <<  "--" << e.getk()  << std::endl;
         }
        f.close();

}