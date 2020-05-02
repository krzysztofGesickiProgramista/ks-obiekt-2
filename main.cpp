#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    ///////////////////////////////////////////////////////////////////
    // SPRAWDZENIE CZY ZADANE FUNKCJONALNOSCI DZIALAJA

    // REJESTRACJA NOWEGO UZYTKOWNIKA:
    cout << endl << "----- REJESTRACJA NOWEGO UZYTKOWNIKA -----" << endl;
    ksiazkaAdresowa.rejestracjaUzytkownika();

    // WYPISANIE WSZYSTKICH UZYTKOWNIKOW:
    cout << endl << "----- WYPISZ WSZYSTKICH UZYTKOWNIKOW -----" << endl;
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    // ZALOGOWANIE UZYTKOWNIKA:
    cout << endl << "----- LOGOWANIE -----" << endl;
    ksiazkaAdresowa.logowanieUzytkownika();

    // DODWANIE DWOCH NOWYCH ADRESATOW:
    cout << endl << "-----DODAJ ADRESATA -----" << endl;
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.dodajAdresata();

    // WYSWIETLENIE WSZYSTKICH ADRESATOW:
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    // WYLOGOWANIE:
    ksiazkaAdresowa.wylogowanieUzytkownika();

    // WYPISANIE WSZYSTKICH UZYTKOWNIKOW:
    cout << endl << "----- WYPISZ WSZYSTKICH UZYTKOWNIKOW -----" << endl;
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    // ZALOGOWANIE UZYTKOWNIKA:
    cout << endl << "----- LOGOWANIE -----" << endl;
    ksiazkaAdresowa.logowanieUzytkownika();

    // WYSWIETLENIE WSZYSTKICH ADRESATOW:
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    return 0;
}
