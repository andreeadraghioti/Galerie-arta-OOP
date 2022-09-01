
#include <iostream>
#include <limits>
#include "Exponat.h"

int Exponat::id_curent = 0;

Exponat::Exponat(const std::string &_denumire, int _anCreatie, const std::string &_colectie,
                 const std::string &_numeArtist, float _dimensiune) : id(id_curent++) {
    this->anCreatie = _anCreatie;
    this->colectie = _colectie;
    this->numeArtist = _numeArtist;
    this->dimensiune = _dimensiune;
}

std::istream &operator>>(std::istream &in, Exponat &exponat) {
    exponat.citire(in);
    return in;
}

std::ostream &operator<<(std::ostream &out, const Exponat &exponat) {
    exponat.afisare(out);
    return out;
}

void Exponat::citire(std::istream &in) {
    std::cout<<"Denumire:";
    in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(in, denumire);

    std::cout<<"Anul Crearii:";
    in>>anCreatie;

    std::cout<<"Nume Artist:";
    in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(in, numeArtist);

    std::cout<<"Dimensiune:";
    in>>dimensiune;
}

void Exponat::afisare(std::ostream &out) const {
    out<<"ID: "<<id<<"\n";
    out<<"Denumire: "<<denumire<<"\n";
    out<<"Anul Crearii: "<<anCreatie<<"\n";
    out<<"Colectie: "<<colectie<<"\n";
    out<<"Numele Artistului: "<<numeArtist<<"\n";
    out<<"dimensiune: "<<dimensiune<<"\n";
}

const std::string &Exponat::getNumeArtist() const {
    return numeArtist;
}
