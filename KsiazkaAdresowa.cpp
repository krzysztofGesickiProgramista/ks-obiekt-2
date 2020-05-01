#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikManager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikManager.wypiszWszystkichUzytkownikow();
}

int KsiazkaAdresowa::logowanieUzytkownika() {
    return uzytkownikManager.logowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika) {
    uzytkownikManager.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
}
