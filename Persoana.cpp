
#include <iostream>
#include <limits>
#include "Persoana.h"

Persoana::Persoana(const std::string &_nume, const std::string &_prenume,
                   const std::string &_telefon, const std::string &_email) {
    this->nume = _nume;
    this->prenume = _prenume;
    this->telefon = _telefon;
    this->email = _email;
}

Persoana::Persoana(const Persoana &cc) {
    this->nume = cc.nume;
    this->prenume = cc.prenume;
    this->telefon = cc.telefon;
    this->email = cc.email;
}

Persoana &Persoana::operator=(const Persoana &op) {
    this->nume = op.nume;
    this->prenume = op.prenume;
    this->telefon = op.telefon;
    this->email = op.email;
}

std::istream &operator>>(std::istream &in, Persoana &persoana) {
    persoana.citire(in);
    return in;
}

std::ostream &operator<<(std::ostream &out, const Persoana &persoana) {
    persoana.afisare(out);
    return out;
}

void Persoana::citire(std::istream &in) {
    std::cout<<"Nume:";
    in>>nume;

    std::cout<<"Prenume:";
    in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(in, prenume);//intrucat std::cin se opreste automat la intalnirea unui spatiu,
                              //utilizam functiile ignore() pt a ignora orice pana cand utilizatorul da enter de la tastatura
                              //si functia getLine() pentru a citi tot string-ul

    std::cout<<"Telefon:";
    in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(in, telefon);

    std::cout<<"Email:";
    in>>email;
}

void Persoana::afisare(std::ostream &out) const {
    out<<"Nume:"<<nume<<"\n";
    out<<"Prenume:"<<prenume<<"\n";
    out<<"Telefon:"<<nume<<"\n";
    out<<"Email:"<<nume<<"\n";
}

const std::string &Persoana::getNume() const {
    return nume;
}
