#include <stdio.h>

int dodawanie(int a, int b, int wynik)
{
    wynik = (a+b);
    printf("Wynik dodawania: %d\n",wynik);
}
int odejmowanie(int a, int b, int wynik)
{
    wynik = (a-b);
    printf("Wynik odejmowania: %d\n",wynik);
}
int mnozenie(int a, int b, int wynik)
{
    wynik = (a*b);
    printf("Wynik mnozenia: %d\n",wynik);
}
int dzielenie(int a, int b, int wynik)
{
    wynik = (a/b);
    printf("Wynik dzielenia: %d\n",wynik);
}
int main()
{
    int a,b,dzialanie, wynik;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d",&a);
    printf("Podaj pierwsza liczbe: ");
    scanf("%d",&b);
    printf("Jaki wynik dzialania chcesz otrzymać?\n");
    printf("Dodawanie - 1\n");
    printf("Odejmowanie - 2\n");
    printf("Mnozenie - 3\n");
    printf("Dzielenie - 4\n>");
    scanf("%d",&dzialanie);
    switch(dzialanie)
    {
        case 1:
        {
            dodawanie(a,b,wynik);
            break;
        }
        case 2:
        {
            odejmowanie(a,b,wynik);
            break;
        }
        case 3:
        {
            mnozenie(a,b,wynik);
            break;
        }
        case 4:
        {
            dzielenie(a,b,wynik);
            break;
        }
    return 0;
    }
}