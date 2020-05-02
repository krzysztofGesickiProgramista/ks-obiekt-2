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

    void rejestracjaUzytkownika();                 // REJESTRACJA UZYTKOWNIKA
    void wypiszWszystkichUzytkownikow();           // WYPISANIE WSZYSTKICH UZYTKOWNIKOW
    void logowanieUzytkownika();                   // ZALOGOWANIE UZYTKOWNIKA
    void zmianaHaslaZalogowanegoUzytkownika();     // ZMIANA HASLA ZALOGOWANEGO UZYTKOWNIKA
    void wylogowanieUzytkownika();                 // WYLOGOWANIE ZALOGOWANEGO UZYTKOWNIKA

    void dodajAdresata();                          // DODAWANIE NOWEGO ADRESATA
    void wyswietlWszystkichAdresatow();            // WYSWIETLANIE WSZYSTKICH ADRESATOW

    int pobierzIdZalogowanegoUzytkownika();        // POMOCNICZA METODA DO SPRAWDZENIA CZY PROGRAM DZIALA
};

#endif
