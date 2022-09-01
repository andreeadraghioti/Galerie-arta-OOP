//
// Created by Andreea on 01/09/2022.
//

#include <iostream>
#include <algorithm>
#include "Utilizator.h"
#include "ExponatFotografie.h"
#include "ExponatPictura.h"
#include "ExponatSculptura.h"
#include "ExponatCombinat.h"

Utilizator* Utilizator::instance = nullptr;

Utilizator *Utilizator::getInstance() {
    if(instance == nullptr)
        instance = new Utilizator();
    return instance;
}

void Utilizator::utilizator() {
    std::cout<<"\n***************************************\n";
    std::cout<<"1. Adaugare Angajati\n";
    std::cout<<"2. Adaugare Sponsori\n";
    std::cout<<"3. Adaugare Exponate\n";
    std::cout<<"4. Afisare Angajati\n";
    std::cout<<"5. Afisare Sponsori\n";
    std::cout<<"6. Afisare Exponate\n";
    std::cout<<"7. Ordonare Angajati dupa Vechime\n";
    std::cout<<"8. Cautare Angajat dupa Nume\n";
    std::cout<<"9. Cautare Exponat dupa Artist\n";
    std::cout<<"10. Iesire Program\n";
    std::cout<<"\n***************************************\n";
}

void Utilizator::adaugareAngajati() {
    unsigned int nr;
    std::shared_ptr<Angajat> angajat;
    std::cout<<"Numarul de angajati pe care doriti sa-l adaugati este:";
    std::cin>>nr;
    for(int i=0; i<nr; i++){
        angajat->citire(std::cin);
        angajati.push_back(angajat);
    }
}

void Utilizator::adaugareSponsori() {
    unsigned int nr;
    std::shared_ptr<Sponsor> sponsor;
    std::cout<<"Numarul de sponsori pe care doriti sa-l adaugati este:";
    std::cin>>nr;
    for(int i=0; i<nr; i++){
        sponsor->citire(std::cin);
        sponsori.push_back(sponsor);
    }
}

void Utilizator::adaugareExponate() {
    unsigned int nrExponate;
    std::shared_ptr<Exponat> temporar;
    std::cout<<"Numarul de exponate pe care doriti sa-l adaugati este:";
    std::cin>>nrExponate;
     for(int i=0; i<nrExponate; i++){
         unsigned int optiune;
         std::cout<<"1-Pictura, 2-Fotografie, 3-Sculptura, 4-Combined Painting:";
         std::cin>>optiune;
         switch(optiune){
             case 1 : {
                 temporar = std::make_shared<ExponatPictura>();
                 break;
             }
             case 2 : {
                 temporar = std::make_shared<ExponatFotografie>();
                 break;
             }
             case 3 : {
                 temporar = std::make_shared<ExponatSculptura>();
                 break;
             }
             case 4 : {
                 temporar = std::make_shared<ExponatCombinat>();
                 break;
             }
             default : {
                 std::cout<<"Optiune Invalida!";
             }
             temporar->citire(std::cin);
             exponate.push_back(temporar);
         }
     }
}

void Utilizator::afisareAngajati() {
    for(auto &angajat : angajati){
        angajat->afisare(std::cout);
        std::cout<<"\n";
    }
}

void Utilizator::afisareSponsori() {
    for(auto &sponsor : sponsori){
        sponsor->afisare(std::cout);
        std::cout<<"\n";
    }
}

void Utilizator::afisareExponate() {
    for(auto &exponat : exponate){
        exponat->afisare(std::cout);
        std::cout<<"\n";
    }
}

void Utilizator::ordonareAngajatiVechime() {
    std::sort(angajati.begin(), angajati.end(), [](const std::shared_ptr<Angajat>&a, const std::shared_ptr<Angajat>&b)->bool {
        if(a->getAn()<=b->getAn())
            return a->getAn()<=b->getAn();
        else if(a->getLuna()<=b->getLuna())
            return a->getLuna()<=b->getLuna();
        else if(a->getZi()<=b->getZi())
            return a->getZi()<=b->getZi();
    });
}

void Utilizator::cautareAngajatNume(const std::string &nume) {
    bool ok;
    for(auto &angajat : angajati){
        ok = angajat->getNume().find(nume)!=std::string::npos;
        if(ok)
            angajat->afisare(std::cout);
        std::cout<<"\n";
    }
}

void Utilizator::cautareExponatArtist(const std::string &nume) {
    bool ok;
    for(auto &exponat : exponate){
        ok = exponat->getNumeArtist().find(nume)!=std::string::npos;
        if(ok)
            exponat->afisare(std::cout);
        std::cout<<"\n";
    }
}
