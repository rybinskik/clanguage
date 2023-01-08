#include <stdio.h>
#include <string.h>

void ramka(char *tab)
{
    
    int n = strlen(tab);
    //góra ramki
    for(int i=0;i<n;i++)
    {
        printf("%c",tab[i]);
    }
    printf("\n");
    //boki ramki
    for(int i=0;i<n;i++)
    {
        printf("%c",tab[i]);
        int space = n-2;
        for(int j=0;j<=space;j++)
        {
            printf(" ");  
        }
        printf("%c\n",tab[i]);
    }
    //dół ramki
    for(int i=0;i<n;i++)
    {
        printf("%c",tab[i]);
    }
}

int main()
{
    char tab[] = "spierdalaj";
    ramka(tab);
}