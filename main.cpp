#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    cout << "aktualne ID zalogowanego uzytkownika: " << ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika();
    cout << endl;
    ksiazkaAdresowa.logowanieUzytkownika();

    cout << "aktualne DRUGIE ID zalogowanego uzytkownika: " << ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika();
    cout << endl;

    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    return 0;
}
