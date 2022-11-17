#include <stdio.h>

int main()
{
    int m; //liczba wpisana przez użytkownika
    int liczby[] = {1,2,3,4,5}; //Tabela możliwych odpowiedzi
    int i; //zmienna do petli
    int j;
    int index = -1;
    int size = 4;
    printf("Odgadnij liczbe z zakresu od 1 do 5: ");
    scanf("%d",&m);
    for(i=3;i>=1;i--)
    {
       for(j=0;j<size;j++)
       {
        if(liczby[j]==m)
        {
            for(int k=j;k=size;k++)
            {
                liczby[k]=liczby[k+1];
                printf("%d ",liczby[k]);
            }
        }
       }
       scanf("%d",&m);
    }
    return 0;
}