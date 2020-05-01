#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    int ID = ksiazkaAdresowa.logowanieUzytkownika();
    cout << endl << "ID zalogowanego uzytkownika: " << ID << endl;

    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(ID);
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    return 0;
}
