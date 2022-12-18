#include <stdio.h>

int znajdz(int * tab, int rozmiar)
{
    int max = tab[0];

    for(int i=1;i<rozmiar;i++)
    {
        if(tab[i]>max)
        {
            max = tab[i];
        }
    }

    int max_indeks = -1;
    
    for(int i=0;i<rozmiar;i++)
    {
        if(tab[i]==max)
        {
            max_indeks = i;
            break;
        }
    }

    if(tab[max_indeks]>=0)
    {
        tab[max_indeks] = 0;
    }
    return max;
}
int main()
{
int rozmiar = 5;

int tab[] = {1,6,12,2,67};

printf("Tablica przed zmiana: ");

for(int i=0;i<rozmiar;i++)
{
    printf("%d, ",tab[i]);
}

int maks = znajdz(tab, 5);

printf("\nMax element: %d\n", maks);

printf("Tablica po zamianie: ");

for(int i=0;i<rozmiar;i++)
{
    printf("%d, ",tab[i]);
}

return 0;
}