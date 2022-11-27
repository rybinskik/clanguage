#include <stdio.h>
#include <string.h>

int main()
{
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
    return 0;
}