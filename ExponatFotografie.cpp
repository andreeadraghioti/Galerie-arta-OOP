
#include <limits>
#include <iostream>
#include "ExponatFotografie.h"

ExponatFotografie::ExponatFotografie(const std::string &_denumire, int _anCreatie, const std::string &_colectie,
                                     const std::string &_numeArtist, float _dimensiune, const std::string &_tip)
        : Exponat(_denumire, _anCreatie, _colectie, _numeArtist, _dimensiune){
    this->tip = _tip;
}

void ExponatFotografie::citire(std::istream &in) {
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

    std::cout<<"Tipul Fotografiei:";
    in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(in, tip);
}

void ExponatFotografie::afisare(std::ostream &out) const {
    Exponat::afisare(out);
    out<<"Tipul Fotografiei: "<<tip<<"\n";
}
