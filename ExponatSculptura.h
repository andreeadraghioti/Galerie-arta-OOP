//
// A 3a categorie de exponate este reprezentata in aceasta clasa
// Pentru sculpturi trebuie sa stim in plus materialul utilizat(lemn, piatra, carton etc)
//

#ifndef GALERIE_ARTA_OOP_EXPONATSCULPTURA_H
#define GALERIE_ARTA_OOP_EXPONATSCULPTURA_H


#include <vector>
#include "Exponat.h"

class ExponatSculptura : virtual public Exponat{
protected:
    std::string material;
public:
    ExponatSculptura() = default;//Constructor fara parametrii default
    ~ExponatSculptura() override= default;//Destructor default

    ExponatSculptura(const std::string&, int, const std::string&, const std::string&, float, const std::string&);//Constrtuctor parametrizat
    ExponatSculptura(const ExponatSculptura&) = default;//Constructor de copiere default
    ExponatSculptura &operator=(const ExponatSculptura&) = default;//Operator =  default

    void citire(std::istream&) override;//functie de citire ce utilizeaza operatorul >>
    void afisare(std::ostream&) const override;//functie de afisare ce utilizeaza operatorul <<
};

#endif //GALERIE_ARTA_OOP_EXPONATSCULPTURA_H
