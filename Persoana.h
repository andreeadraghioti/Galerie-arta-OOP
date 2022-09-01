#ifndef GALERIE_ARTA_OOP_PERSOANA_H
#define GALERIE_ARTA_OOP_PERSOANA_H


#include <string>

class Persoana {
protected://Atributele sunt protected in clasa de baza pentru a putea fi accesate in clasele care o mostenesc
    std::string nume;
    std::string prenume;
    std::string telefon;
    std::string email;
public:
    Persoana() = default;//Contructor fara parametrii default
    virtual ~Persoana() = default;//Destructor default

    Persoana(const std::string &, const std::string &, const std::string &, const std::string &);//Constructor Parametrizat
    Persoana(const Persoana&);//Constructor de Copiere
    Persoana &operator=(const Persoana&);//Operatorul =

    friend std::istream& operator>>(std::istream&, Persoana&);//operatorul >>
    friend std::ostream& operator<<(std::ostream&, const Persoana&);//operatorul <<

    virtual void citire(std::istream&);//functie de citire ce utilizeaza operatorul >>
    virtual void afisare(std::ostream&) const;//functie de afisare ce utilizeaza operatorul <<
    const std::string &getNume() const;
};


#endif //GALERIE_ARTA_OOP_PERSOANA_H
