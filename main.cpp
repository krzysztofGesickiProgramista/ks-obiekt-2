#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    cout << endl << "ID zalogowanego uzytkownika: " << ksiazkaAdresowa.logowanieUzytkownika();

    return 0;
}
