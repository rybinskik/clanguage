#include <stdio.h>

int main()
{
    int m; //liczba wpisana przez użytkownika
    int s = 3; //Szukana liczba
    int i; //zmienna do petli
    printf("Odgadnij liczbe z zakresu od 1 do 5: ");
    scanf("%d",&m);
    for(i=2;i>=1;i--)
    {
        if(m==s)
        {
            printf("Gratulacje, odgadles/as liczbe!!!");
            break;
        }
        else if(m!=s)
        {
            printf("To nie jest ta liczba, pozostalo %d szans\nOdgadnij liczbe z zakresu od 1 do 5: ",i);
            scanf("%d",&m);
        }
        if(i==1)
        {
            printf("Niestety nie odgadles liczby\n");
            break;
        }
    }
    return 0;
}