#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    printf("Podaj dlugosc pierwszego odcinka: ");
    scanf("%d",&a);
    printf("Podaj dlugosc drugiego odcinka: ");
    scanf("%d",&b);
    printf("Podaj dlugosc trzeciego odcinka: ");
    scanf("%d",&c);
    if((pow(a,2)+pow(b,2)==pow(c,2))||(pow(a,2)+pow(c,2)==pow(b,2))||(pow(b,2)+pow(c,2)==pow(a,2)))
    {
        printf("Podane odcinki tworza trojkat prostokatny\n");
    }
    else
    {
        printf("Podane odcinki nie tworza trojkata prostokatnego");
    }
    return 0;
}