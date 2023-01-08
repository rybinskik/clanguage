#include <stdio.h>

int a = 4;

int main()
{
    int tab[10];
    for(int i=0;i<=9;i++)
    {
        printf("%d: ", i);
        scanf("%d", &tab[i]);
    }
    printf("\n");
    for(int j=0;j<=9;j++)
    {
        printf("%d, ", *(tab+j));
    }
}