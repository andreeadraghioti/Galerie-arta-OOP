
#include <iostream>
#include <limits>
#include "ExponatSculptura.h"

ExponatSculptura::ExponatSculptura(const std::string &_denumire, int _anCreatie, const std::string &_colectie,
                                   const std::string &_numeArtist, float _dimensiune, const std::string &_material)
        : Exponat(_denumire, _anCreatie, _colectie, _numeArtist, _dimensiune){
    this->material = _material;
}

void ExponatSculptura::citire(std::istream &in) {
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

    std::cout<<"Material Utilizat:";
    in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(in, material);
}

void ExponatSculptura::afisare(std::ostream &out) const {
    Exponat::afisare(out);
    out<<"Material: "<<material<<"\n";
}
