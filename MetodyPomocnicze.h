#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <windows.h>

using namespace std;

class MetodyPomocnicze
{
public:
    static string wczytajLinie();
    static string konwerjsaIntNaString(int liczba);
    static int konwersjaStringNaInt(string liczba);
    static string pobierzLiczbe(string tekst, int pozycjaZnaku);
    static void pokazMenuZalogowanegoUzytkownika();
    static void pokazMenuNiezalogowanegoUzytkownika ();
    static char wczytajZnak();
};

#endif
