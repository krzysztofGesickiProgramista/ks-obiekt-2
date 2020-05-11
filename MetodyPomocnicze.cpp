#include "MetodyPomocnicze.h"

string MetodyPomocnicze::konwerjsaIntNaString(int liczba) {
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

string MetodyPomocnicze::wczytajLinie() {
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}

int MetodyPomocnicze::konwersjaStringNaInt(string liczba) {
    int liczbaInt;
    istringstream iss(liczba);
    iss >> liczbaInt;
    return liczbaInt;
}

string MetodyPomocnicze::pobierzLiczbe(string tekst, int pozycjaZnaku) {
    string liczba = "";
    while(isdigit(tekst[pozycjaZnaku]) == true)
    {
        liczba += tekst[pozycjaZnaku];
        pozycjaZnaku ++;
    }
    return liczba;
}

void MetodyPomocnicze::pokazMenuZalogowanegoUzytkownika () {
    system("cls");
    cout << "1. Dodaj adresata"  <<  endl;
    cout << "2. Wyszukaj po imieniu"  <<  endl;
    cout << "3. Wyszukaj po nazwisku"  <<  endl;
    cout << "4. Wyswietl wszystkich adresatow"  <<  endl;
    cout << "5. Usun adresata"  <<  endl;
    cout << "6. Edytuj adresata"  <<  endl;
    cout << "7. Zmien haslo"  <<  endl;
    cout << "8. Wyloguj sie"  <<  endl;
    cout << endl;
    cout << "Twoj wybor: ";
}

void MetodyPomocnicze::pokazMenuNiezalogowanegoUzytkownika () {
    system("cls");
    cout << "1. Logowanie"  <<  endl;
    cout << "2. Rejestracja"  <<  endl;
    cout << "9. Zamknij program"  <<  endl;
    cout << endl;
    cout << "Twoj wybor: ";
}

char MetodyPomocnicze::wczytajZnak() {
    string wejscie = "";
    char znak = {0};
    while (true) {
        getline(cin, wejscie);
        if (wejscie.length() == 1) {
            znak = wejscie[0];
            break;
        }
        cout << "To nie jest pojedynczy znak. Wpisz ponownie" << endl;
    }
    return znak;
}

