//
// Baza de date a galeriei de arta retine date despre angajatii sai
//
#ifndef GALERIE_ARTA_OOP_ANGAJAT_H
#define GALERIE_ARTA_OOP_ANGAJAT_H

#include <ctime>
#include "Persoana.h"

class Angajat : public Persoana {
private:
    std::string dataAngajare;
    int an{};
    int luna{};
    int zi{};
    float salariu{};
public:
    Angajat() = default;//Contructor fara parametrii default
    ~Angajat() override = default;//Destructor default

    Angajat(const std::string &, const std::string &, const std::string &, const std::string &, const std::string &,
            float);//Constructor Parametrizat
    Angajat(const Angajat &) = default;//Constructor de copiere default
    Angajat &operator=(const Angajat&) = default;//Operator = default

    void citire(std::istream&) override;//functie de citire ce utilizeaza operatorul >>
    void afisare(std::ostream&) const override;//functie de afisare ce utilizeaza operatorul <<

    int getAn() const;

    int getLuna() const;

    int getZi() const;

};


#endif //GALERIE_ARTA_OOP_ANGAJAT_H
