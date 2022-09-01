//
// Draghioti Andreea Maria
// Grupa 262
// Proiect realizat utilizand Programarea Orientata pe Obiect
// Limbaj C++
// Titlu : Baza de Date a unei Galerii de Arta
// Proiect realizat in aplicatia CLION
//
#include <iostream>
#include "Angajat.h"
#include "Utilizator.h"

int main() {
    int ok=0;
    Utilizator *utilizator = Utilizator::getInstance();
    do{
        utilizator->utilizator();
        std::cout<<"Introduceti numarul optiunii alese:";
        std::cin>>ok;
        switch(ok){
            case 1 : {
                std::cout<<"-------------------------\n";
                std::cout<<"ADAUGARE ANGAJATI\n";
                std::cout<<"-------------------------\n";
                utilizator->adaugareAngajati();
                break;
            }
            case 2 : {
                std::cout<<"-------------------------\n";
                std::cout<<"ADAUGARE SPONSORI\n";
                std::cout<<"-------------------------\n";
                utilizator->adaugareSponsori();
                break;
            }
            case 3 : {
                std::cout<<"-------------------------\n";
                std::cout<<"ADAUGARE EXPONATE\n";
                std::cout<<"-------------------------\n";
                utilizator->adaugareExponate();
                break;
            }
            case 4 : {
                std::cout<<"-------------------------\n";
                std::cout<<"AFISARE ANGAJATI\n";
                std::cout<<"-------------------------\n";
                utilizator->afisareAngajati();
                break;
            }
            case 5 : {
                std::cout<<"-------------------------\n";
                std::cout<<"AFISARE SPONSORI\n";
                std::cout<<"-------------------------\n";
                utilizator->afisareSponsori();
                break;
            }
            case 6 : {
                std::cout<<"-------------------------\n";
                std::cout<<"AFISARE EXPONATE\n";
                std::cout<<"-------------------------\n";
                utilizator->afisareExponate();
                break;
            }
            case 7 : {
                std::cout<<"-------------------------\n";
                std::cout<<"ORDONARE ANGAJATI DUPA VECHIME\n";
                std::cout<<"-------------------------\n";
                utilizator->ordonareAngajatiVechime();
                break;
            }
            case 8 : {
                std::cout<<"-------------------------\n";
                std::cout<<"CAUTARE ANGAJAT DUPA NUME\n";
                std::cout<<"-------------------------\n";
                std::string numeAngajat;
                std::cout<<"Introduceti numele:";
                std::cin>>numeAngajat;
                utilizator->cautareAngajatNume(numeAngajat);
                break;
            }
            case 9 : {
                std::cout<<"-------------------------\n";
                std::cout<<"CAUTARE EXPONAT DUPA ARTIST\n";
                std::cout<<"-------------------------\n";
                std::string numeArtist;
                std::cout<<"Introduceti numele:";
                std::cin>>numeArtist;
                utilizator->cautareExponatArtist(numeArtist);
                break;
            }
            case 10 : {
                std::cout<<"-------------------------\n";
                std::cout<<"IESIRE PROGRAM\n";
                std::cout<<"-------------------------\n";
                break;
            }
            default : {
                std::cout<<"-------------------------\n";
                std::cout<<"OPTIUNE INVALIDA\n";
                std::cout<<"-------------------------\n";
                break;
            }
        }
    }while(ok!=0);

    return 0;
}
