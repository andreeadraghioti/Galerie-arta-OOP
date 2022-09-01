//
// Galeria colaboreaza cu diversi sponsori care sunt, de asemenea, in baza de date
//

#ifndef GALERIE_ARTA_OOP_SPONSOR_H
#define GALERIE_ARTA_OOP_SPONSOR_H


#include "Persoana.h"

class Sponsor : public Persoana{
private:
    std::string dataIncepereContract;
    int an;
    int luna;
    int zi;
public:
    Sponsor() = default;//Contructor fara parametrii default
    ~Sponsor() override = default;//Destructor default

    Sponsor(const std::string &, const std::string &, const std::string &, const std::string &, const std::string &);//Constructor Parametrizat
    Sponsor(const Sponsor&) = default;//Constructor de copiere default
    Sponsor &operator=(const Sponsor&) = default;//Operator = default

    void citire(std::istream&) override;//functie de citire ce utilizeaza operatorul >>
    void afisare(std::ostream&) const override;//functie de afisare ce utilizeaza operatorul <<

};


#endif //GALERIE_ARTA_OOP_SPONSOR_H
