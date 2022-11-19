#include <stdio.h>

int main()
{
    int a;
    printf("Podaj kod ASCII: ");
    scanf("%d",&a);
    if((a>=65&&a<=90)||(a>=97&&a<=122))
    printf("\"%d\" reprezentuje znak litery alfabetu\n",a);
    else
    printf("\"%d\" nie reprezentuje znaku litery alfabetu\n",a);
    return 0;
}