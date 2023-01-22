#include <stdio.h>

int bin(int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        bin(a/2);
        printf("%d", a%2);
    }
}

int main()
{
    int a = 0;
    int b;
    printf("Podaj liczbe calkowita: ");
    scanf("%d",&a);
    b = a;
    bin(a);
    return 0;
}