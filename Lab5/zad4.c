#include <stdio.h>
#include <string.h>

int main()
{
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
    return 0;
}