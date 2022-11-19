#include <stdio.h>

int main()
{
    double r,s;
    printf("Podaj dowolny kat: ");
    scanf("%lf",&s);
    r = s/180;
    printf("Podany kat wynosi %lf PI radiana", r);
    return 0;
}