//
// Galeria tine in baza sa de date expozitii de 4 feluri: Pictura, Fotografie, Sculptura
//

#ifndef GALERIE_ARTA_OOP_EXPONAT_H
#define GALERIE_ARTA_OOP_EXPONAT_H


#include <string>

class Exponat {
protected://Atributele sunt protected in clasa de baza pentru a putea fi accesate in clasele care o mostenesc
    int id{};//implementam un id ce se incrementeaza automat utilizand o variabila statica
    static int id_curent;
    std::string denumire;
    int anCreatie{};
    std::string colectie;
    std::string numeArtist;
    float dimensiune{};
public:
    Exponat() : id(id_curent++){};//Constructor fara parametrii cu incrementare de id
    virtual ~Exponat() = default;//Destructor default

    Exponat(const std::string&, int, const std::string&, const std::string&, float);//Constructor Parametrizat
    Exponat(const Exponat&) = default;//Constructor de copiere default
    Exponat &operator=(const Exponat&) = default;//Operator =  default

    friend std::istream& operator>>(std::istream&, Exponat&);//operatorul >>
    friend std::ostream& operator<<(std::ostream&, const Exponat&);//operatorul <<

    virtual void citire(std::istream&);//functie de citire ce utilizeaza operatorul >>
    virtual void afisare(std::ostream&) const;//functie de afisare ce utilizeaza operatorul <<
    const std::string &getNumeArtist() const;
};


#endif //GALERIE_ARTA_OOP_EXPONAT_H
