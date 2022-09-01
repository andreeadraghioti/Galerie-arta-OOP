
#include <iostream>
#include <limits>
#include "ExponatPictura.h"

ExponatPictura::ExponatPictura(const std::string &_denumire, int _anCreatie, const std::string &_colectie,
                               const std::string &_numeArtist, float _dimensiune, const std::string &_tehnica)
                               : Exponat(_denumire, _anCreatie, _colectie, _numeArtist, _dimensiune){
    this->tehnica = _tehnica;
}

void ExponatPictura::citire(std::istream &in) {
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

    std::cout<<"Tehnica Utilizata:";
    in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(in, tehnica);
}

void ExponatPictura::afisare(std::ostream &out) const {
    Exponat::afisare(out);
    out<<"Tehnica: "<<tehnica<<"\n";
}
