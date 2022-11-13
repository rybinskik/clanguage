#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Podaj dlugosc pierwszego odcinka: ");
    scanf("%d",&a);
    printf("Podaj dlugosc drugiego odcinka: ");
    scanf("%d",&b);
    printf("Podaj dlugosc trzeciego odcinka: ");
    scanf("%d",&c);
    if(a>b&&a>c)
    {
        if(a<b+c)
        {
            printf("Z podanych odcinkow mozna utworzyc trojkat\n");
        }
        else
        {
            printf("Z podanych odcinkow nie mozna utworzyc trojkata");
        }
    }
    else if(b>a&&b>c)
    {
        if(b<a+c)
        {
            printf("Z podanych odcinkow mozna utworzyc trojkat\n");
        }
        else
        {
            printf("Z podanych odcinkow nie mozna utworzyc trojkata");
        }
    }
    else if(c>a&&c>b)
    {
        if(c<a+b)
        {
            printf("Z podanych odcinkow mozna utworzyc trojkat\n");
        }
        else
        {
            printf("Z podanych odcinkow nie mozna utworzyc trojkata");
        }
    }
    else if(a=b=c)
    {
        printf("Z podanych odcinkow mozna utworzyc trojkat\n");
    }
    else
    {
        printf("Z podanych odcinkow nie mozna utworzyc trojkata");
    }
    return 0;
}