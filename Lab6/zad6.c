#include <stdio.h>

int suma(int a)
{
    if(a==0)
    {
        return a;
    }
    else
    {
        return (a%10) + suma(a/10);
    }
}

int main()
{
    int a;
    printf("Podaj liczbe calkowita: ");
    scanf("%d",&a);
    printf("suma cyfr: %d", suma(a));
}