//
// Prima categorie de exponate este reprezentata in aceasta clasa
// Pentru picturi trebuie sa stim in plus tehnica utilizata (ulei, acuarela, schita in carbune, pictura cu pensula uscata etc)
//

#ifndef GALERIE_ARTA_OOP_EXPONATPICTURA_H
#define GALERIE_ARTA_OOP_EXPONATPICTURA_H


#include "Exponat.h"

class ExponatPictura : virtual public Exponat{
protected:
    std::string tehnica;
public:
    ExponatPictura() = default;//Constructor fara parametrii default
    ~ExponatPictura() override = default;//Destructor default

    ExponatPictura(const std::string&, int, const std::string&, const std::string&, float, const std::string&);//Constrtuctor parametrizat
    ExponatPictura(const ExponatPictura&) = default;//Constructor de copiere default
    ExponatPictura &operator=(const ExponatPictura&) = default;//Operator =  default

    void citire(std::istream&) override;//functie de citire ce utilizeaza operatorul >>
    void afisare(std::ostream&) const override;//functie de afisare ce utilizeaza operatorul <<
};


#endif //GALERIE_ARTA_OOP_EXPONATPICTURA_H
