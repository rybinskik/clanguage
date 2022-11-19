#include <stdio.h>

int main()
{
    int a,i;
    printf("Podaj dowolna liczbe calkowita: ");
    scanf("%d",&a);
    for(i=2;i<=6;++i)
    {
        if(a%i==0)
        {
            printf("%d\n",a/i);
            break;
        }
    }
    if((a%2!=0)&&(a%3!=0)&&(a%4!=0)&&(a%5!=0)&&(a%6!=0))
    {
        printf("Podana liczba nie jest podzielna przez zadna z liczb z zakresu 2-6");
    }
    return 0;
}