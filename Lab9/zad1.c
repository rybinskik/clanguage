#include <stdio.h>
#include <stdlib.h>

struct Dane
{
    char *imie;
    char *nazwisko;
    long int nr_telefonu;
};

int main()
{
    struct Dane magical;
    magical.imie = "Daniel";
    magical.nazwisko = "Zwierzynski";
    magical.nr_telefonu = 609606306;

    struct Dane rafonix;
    rafonix.imie = "Marcin";
    rafonix.nazwisko = "Krasucki";
    rafonix.nr_telefonu = 420058765;

    printf("%s, %s, %i\n", magical.imie, magical.nazwisko, magical.nr_telefonu);
    printf("%s, %s, %i\n", rafonix.imie, rafonix.nazwisko, rafonix.nr_telefonu);
}
