#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Wpisz pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Wpisz druga liczbe: ");
    scanf("%d", &b);
    printf("Wpisz trzecia liczbe: ");
    scanf("%d", &c);
    if(a>b&&a>c)
    printf("wieksza liczba to %d\n",a);
    else if(b>a&&b>c)
    printf("wieksza liczba to %d\n",b);
    else if(c>a&&c>b)
    printf("wieksza liczba to %d\n",c);
    return 0;
}