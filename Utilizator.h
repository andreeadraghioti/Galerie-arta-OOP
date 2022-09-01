//
// Prin intermediul acestei clase, utiliatorul poate adauga, sterge sau manipula informatiile stocate in baza de date
//

#ifndef GALERIE_ARTA_OOP_UTILIZATOR_H
#define GALERIE_ARTA_OOP_UTILIZATOR_H


#include <memory>
#include <vector>
#include "Angajat.h"
#include "Sponsor.h"
#include "Exponat.h"

class Utilizator {
private:
    //implementam o clasa Singleton deoarece dorim ca acest "meniu" sa aiba o singura instantiere
    static Utilizator *instance;
    Utilizator() = default;
    std::vector<std::shared_ptr<Angajat>> angajati;
    std::vector<std::shared_ptr<Sponsor>> sponsori;
    std::vector<std::shared_ptr<Exponat>> exponate;
public:
    ~Utilizator() = default;
    static Utilizator* getInstance();

    static void utilizator();

    void adaugareAngajati();
    void adaugareSponsori();
    void adaugareExponate();
    void afisareAngajati();
    void afisareSponsori();
    void afisareExponate();
    void ordonareAngajatiVechime();
    void cautareAngajatNume(const std::string &);
    void cautareExponatArtist(const std::string &);
};


#endif //GALERIE_ARTA_OOP_UTILIZATOR_H
