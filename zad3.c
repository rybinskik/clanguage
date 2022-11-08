#include <stdio.h>

int main()
{
    int a,b;
    printf("Wpisz pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Wpisz druga liczbe: ");
    scanf("%d", &b);
    if(a>b)
    printf("wieksza liczba to %d\n",a);
    else if(b>a)
    printf("wieksza liczba to %d\n",b);
    return 0;
}