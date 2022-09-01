//
// A 2a categorie de exponate este reprezentata in aceasta clasa
// Pentru fotografii trebuie sa stim in plus tipul (peisaj, portret, fotografie stradala etc)
//

#ifndef GALERIE_ARTA_OOP_EXPONATFOTOGRAFIE_H
#define GALERIE_ARTA_OOP_EXPONATFOTOGRAFIE_H


#include "Exponat.h"

class ExponatFotografie : public Exponat{
private:
    std::string tip;
public:
    ExponatFotografie() = default;//Constructor fara parametrii default
    ~ExponatFotografie() override = default;//Destructor default

    ExponatFotografie(const std::string&, int, const std::string&, const std::string&, float, const std::string&);//Constrtuctor parametrizat
    ExponatFotografie(const ExponatFotografie&) = default;//Constructor de copiere default
    ExponatFotografie &operator=(const ExponatFotografie&) = default;//Operator =  default

    void citire(std::istream&) override;//functie de citire ce utilizeaza operatorul >>
    void afisare(std::ostream&) const override;//functie de afisare ce utilizeaza operatorul <<

};


#endif //GALERIE_ARTA_OOP_EXPONATFOTOGRAFIE_H
