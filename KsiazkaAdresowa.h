#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikManager.h"
#include "AdresatManager.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikManager uzytkownikManager;
    AdresatManager adresatManager;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikManager(nazwaPlikuZUzytkownikami), adresatManager(nazwaPlikuZAdresatami) {
        uzytkownikManager.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();

    int pobierzIdZalogowanegoUzytkownika();

    void dodajAdresata();
    void wyswietlWszystkichAdresatow();

};

#endif
