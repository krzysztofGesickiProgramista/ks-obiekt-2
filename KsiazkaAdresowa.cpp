#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikManager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikManager.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika() {
    uzytkownikManager.logowanieUzytkownika();
    adresatManager.wczytajAdresatowZalogowanegoUzytkownikaZPliku(uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {
    uzytkownikManager.zmianaHaslaZalogowanegoUzytkownika();
}

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika() {
    return uzytkownikManager.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika() {
    uzytkownikManager.wylogowanieUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata() {
    adresatManager.dodajAdresata(uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {
    adresatManager.wyswietlWszystkichAdresatow();
}

