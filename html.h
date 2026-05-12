//
// Created by HAMZA on 10/05/26.
//

#ifndef CPP_HTML_H
#define CPP_HTML_H
#include <string>

class html {
    public:
    html(std::string v,std::string k,std::string l) {
        this->v = v;
        this->k = k;
        this->l = l;
    }
    std::string getv() const {
        return this->v;
    }
    std::string getk() const {
        return this->k;
    }
    std::string getl() const {
        return this->l;
    }
    bool Itsv() {
        return (this->v=="");
    }
    bool Itk() {
        return (this->k=="");
    }
    bool Itl() {
        return (this->l=="");
    }
  private:
    std::string v="";
    std::string k="";
    std::string l="";

};





#endif //CPP_HTML_H
