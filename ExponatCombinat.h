//
// A 4a categorie de exponate este reprezentata in aceasta clasa
// "Combined painting" este un tip de arta ce imbina elemente de pictura cu elemente de sculptura
// Intrucat galeria de arta gazduieste de putin timp acest tip de arta, o expozitie ce contine "Combined paintings"
// va primi si o scurta descriere cu scopul de a atrage vizitatori
//

#ifndef GALERIE_ARTA_OOP_EXPONATCOMBINAT_H
#define GALERIE_ARTA_OOP_EXPONATCOMBINAT_H


#include "ExponatPictura.h"
#include "ExponatSculptura.h"

class ExponatCombinat : public ExponatPictura, public ExponatSculptura{
private:
    std::string descriere;
public:
    ExponatCombinat() = default;
    ~ ExponatCombinat() override = default;

    ExponatCombinat(const std::string&, int, const std::string&, const std::string&, float, const std::string&,
                    const std::string &, const std::string &);//Constrtuctor parametrizat
    ExponatCombinat(const ExponatCombinat&) = default;//Constructor de copiere default
    ExponatCombinat &operator=(const ExponatCombinat&) = default;//Operator =  default

    void citire(std::istream&) override;//functie de citire ce utilizeaza operatorul >>
    void afisare(std::ostream&) const override;//functie de afisare ce utilizeaza operatorul <<

};


#endif //GALERIE_ARTA_OOP_EXPONATCOMBINAT_H
