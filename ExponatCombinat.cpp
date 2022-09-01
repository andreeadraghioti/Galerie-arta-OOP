
#include <iostream>
#include <limits>
#include "ExponatCombinat.h"

ExponatCombinat::ExponatCombinat(const std::string &_denumire, int _anCreatie, const std::string &_colectie,
                                 const std::string &_numeArtist, float _dimensiune, const std::string &_tehnica,
                                 const std::string &_material, const std::string &descriere) :
                                 ExponatPictura(_denumire, _anCreatie, _colectie, _numeArtist, _dimensiune, _tehnica){
    this->descriere = descriere;
}

void ExponatCombinat::citire(std::istream &in) {
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

    std::cout<<"Material Utilizat:";
    in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(in, material);

    std::cout<<"Descriere:";
    in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(in, descriere);
}

void ExponatCombinat::afisare(std::ostream &out) const {
    ExponatPictura::afisare(out);
    std::cout<<"Material: "<<material<<"\n";
    std::cout<<"Descriere: "<<descriere<<"\n";
}
