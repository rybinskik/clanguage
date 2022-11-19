#include <stdio.h>

int main()
{
    int m,i,j,s,k;
    int liczby[] = {1,2,3,4,5};
    printf("Odgadnij liczbe z zakresu od 1 do 5\n");
    for(i=4;i>=1;--i) //ilość szans
    {
        printf("Pozostalo %d prob: ",i);
        scanf("%d",&m);
        for(j=0;j<=4;j++) //szukamy w naszej tablicy liczby równej wpisanej liczbie
        {
            if(liczby[j]==m)
            {
                liczby[j]=0; // i zamieniamy ją na zero
            }
        }
        printf("To nie ta liczba\n");
    }
    for(k=0;k<=4;++k)
        {
            if(liczby[k]!=0) // wyszukujemy z tablicy liczbę różną od zera, czyli jedyną liczbę, jakiej nie wpisaliśmy w naszych próbach
            {
                    s = liczby[k]; // liczbę zapisujemy w zmiennej s
                    break;
            }
        }
    printf("Nie udalo sie ogdadnac, szukana liczba to %d",s); // program wypluwa "właściwą odpowiedź", i gra gitara
    return 0;
}

//Trzymaj się tam byku, pamiętaj PIJ WODE