#include <stdio.h>

int main()
{
    int n;
    int tab[n];
    printf("Podaj n: ");
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        printf("Podaj %d liczbe: ",i+1);
        scanf("%d",&tab[i]);
    }
    printf("|");
    for(int j=0;j<n;++j)
    {
        printf(" %d |",tab[j]);
    }
    printf("\n");
    return 0;
}