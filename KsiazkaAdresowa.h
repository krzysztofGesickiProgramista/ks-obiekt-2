#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikManager.h"
#include "AdresatManager.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikManager uzytkownikManager;
    AdresatManager *adresatManager;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    bool login;                                       // ZMIENNA DO KONTROLOWANIA MENU

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikManager(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami) {
        login = false;
        adresatManager = NULL;
    };

    ~KsiazkaAdresowa() {
    delete adresatManager;
    adresatManager = NULL;
    };

    void start();                                        // START PROGRAMU

    void menuZalogowanegoUzytkownika(char wybor);        // KONTROLA MENU ZALOGOWANEGO UZYTKOWNIKA
    void menuNiezalogowanegoUzytkownika(char wybor);     // KONTROLA MENU NIEZALOGOWANEGO UZYTKOWNIKA

    void rejestracjaUzytkownika();                       // REJESTRACJA UZYTKOWNIKA
    void wypiszWszystkichUzytkownikow();                 // WYPISANIE WSZYSTKICH UZYTKOWNIKOW
    void logowanieUzytkownika();                         // ZALOGOWANIE UZYTKOWNIKA
    void zmianaHaslaZalogowanegoUzytkownika();           // ZMIANA HASLA ZALOGOWANEGO UZYTKOWNIKA
    void wylogowanieUzytkownika();                       // WYLOGOWANIE ZALOGOWANEGO UZYTKOWNIKA

    void dodajAdresata();                                // DODAWANIE NOWEGO ADRESATA
    void wyswietlWszystkichAdresatow();                  // WYSWIETLANIE WSZYSTKICH ADRESATOW

    int pobierzIdZalogowanegoUzytkownika();

};

#endif
