
#include <iostream>
#include "Sponsor.h"

Sponsor::Sponsor(const std::string &_nume, const std::string &_prenume, const std::string &_telefon,
                 const std::string &_email, const std::string &_dataIncepereContract)
                 : Persoana(_nume, _prenume, _telefon, _email){
    this->dataIncepereContract = _dataIncepereContract;
}
void Sponsor::citire(std::istream &in) {
    Persoana::citire(in);

    std::cout<<"!!!!!\tIntroduceti data angajarii in formatul YYYY-MM-DD\t!!!!!\n";
    std::cout<<"Data angajarii:";
    in>>dataIncepereContract;
    this->an = stoi(dataIncepereContract.substr(0,4));
    this->luna = stoi(dataIncepereContract.substr(5,2));
    this->zi = stoi(dataIncepereContract.substr(8,2));

}

void Sponsor::afisare(std::ostream &out) const {
    Persoana::afisare(out);
    out<<"Data inceperii contractului:"<<dataIncepereContract<<"\n";
}
