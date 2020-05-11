#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikManager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikManager.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika() {
    uzytkownikManager.logowanieUzytkownika();
    if (uzytkownikManager.czyUzytkownikJestZalogowany()) {
        adresatManager = new AdresatManager(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
    }
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
    adresatManager->dodajAdresata();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {
    adresatManager->wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::start() {
    char wybor;
    while (true){
        if (login) {
            MetodyPomocnicze::pokazMenuZalogowanegoUzytkownika();
            wybor = MetodyPomocnicze::wczytajZnak();
            menuZalogowanegoUzytkownika(wybor);
        }
        else {
            MetodyPomocnicze::pokazMenuNiezalogowanegoUzytkownika();
            wybor = MetodyPomocnicze::wczytajZnak();
            menuNiezalogowanegoUzytkownika(wybor);
        }
    }
}

void KsiazkaAdresowa::menuNiezalogowanegoUzytkownika(char wybor) {
    switch (wybor) {
        case '1':
            logowanieUzytkownika();
            if (uzytkownikManager.pobierzIdZalogowanegoUzytkownika() != 0) {
                login = true;
            }
            break;
        case '2':
            rejestracjaUzytkownika();
            break;
        case '9':
            cout << "Wylaczasz program";
            Sleep(2000);
            exit(0);
            break;
        default:
            cout << "Wybrano niepoprawna opcje! " << endl;
            Sleep(2000);
            break;
    }
}

void KsiazkaAdresowa::menuZalogowanegoUzytkownika(char wybor) {
    switch (wybor) {
        case '1':
            dodajAdresata();
            break;
        case '2':
            //searchContactByName();
            break;
        case '3':
            //searchContactBySurname();
            break;
        case '4':
            wyswietlWszystkichAdresatow();
            break;
        case '5':
            //deleteContact();
            break;
        case '6':
            //editContact();
            break;
        case '7':
            //changePassword(currentUserId);
            break;
        case '8':
            login = false;
            cout << "Wylogowales sie";
            Sleep(1000);
            break;
        default:
            cout << "Wybrano niepoprawna opcje! " << endl;
            Sleep(2000);
            break;
    }
}

