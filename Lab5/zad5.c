#include <stdio.h>
<<<<<<< HEAD
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
=======

int main()
{
    int a1,a2,a3,b1,b2,b3;
    printf("a1: ");
    scanf("%d",&a1);
    printf("b1: ");
    scanf("%d",&b1);
    printf("a2: ");
    scanf("%d",&a2);
    printf("b2: ");
    scanf("%d",&b2);
    printf("[a1;b1] = [%d;%d]\n",a1,b1);
    printf("[a2;b2] = [%d;%d]\n",a2,b2);
    if((a2<b1))
    {

    }
    else if((b1<a2)||(b2<a1))
    {
        printf("-1\n");
    }
    return 0;
>>>>>>> b0987a3efaacc7f59dc8747a523e09bc6e214cdd
}