#include <stdio.h>
#include <string.h>

int main()
{
<<<<<<< HEAD
    char napis[50];
    printf("Podaj wyraz: ");
    scanf("%s",&napis);
    int dl = strlen(napis);
    for(int i=0;i<=dl;i++)
    {
        if(!(napis[i]==napis[dl-1-i]))
        {
            printf("Wyraz nie jest palindromem");
            return 0;
        }
        else
        {
            continue;
        }
    }
    printf("Wyraz jest palindromem");
=======
    char slowo[20];
    printf("Podaj slowo: ");
    scanf("%s",slowo);
    int dl = strlen(slowo);
    int i = 0;
    int flaga = 0;
    while(i<dl)
    {
        if(slowo[i] != slowo[dl-i-1])
        {
            printf("Slowo nie jest palindromem\n");
            flaga = 1;
            break;
        }
        ++i;
    }
    if(flaga!=1)
    {
        printf("Slowo jest palindromem\n");
    }
>>>>>>> b0987a3efaacc7f59dc8747a523e09bc6e214cdd
    return 0;
}