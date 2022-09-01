
#include <iostream>
#include "Angajat.h"

Angajat::Angajat(const std::string &_nume, const std::string &_prenume, const std::string &_telefon,
                 const std::string &_email, const std::string &_dataAngajare, float _salariu)
                 : Persoana(_nume, _prenume, _telefon, _email){
    this->dataAngajare = _dataAngajare;
    this->salariu = _salariu;
}

void Angajat::citire(std::istream &in) {
    Persoana::citire(in);

    std::cout<<"!!!!!\tIntroduceti data angajarii in formatul YYYY-MM-DD\t!!!!!\n";
    std::cout<<"Data angajarii:";
    in>>dataAngajare;
    this->an = stoi(dataAngajare.substr(0,4));
    this->luna = stoi(dataAngajare.substr(5,2));
    this->zi = stoi(dataAngajare.substr(8,2));

    std::cout<<"Salariu:";
    in>>salariu;

}

void Angajat::afisare(std::ostream &out) const {
    Persoana::afisare(out);
    out<<"Data Angajare:"<<dataAngajare<<"\n";
    out<<"Salariu: "<<salariu<<"\n";
}

int Angajat::getAn() const {
    return an;
}

int Angajat::getLuna() const {
    return luna;
}

int Angajat::getZi() const {
    return zi;
}
