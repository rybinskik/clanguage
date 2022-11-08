#include <stdio.h>

int main()
{
    int a;
    printf("Wpisz rok: ");
    scanf("%d", &a);
    if(a%4==0)
    printf("Rok %d jest rokiem przestepnym",a);
    else
    printf("Rok %d nie jest rokiem przestepnym",a);
    return 0;
}