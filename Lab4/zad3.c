#include <stdio.h>

int main()
{
    int a, b, c=1, i;
    printf("Podaj a: ");
    scanf("%d",&a);
    printf("Podaj b: ");
    scanf("%d",&b);
    int w = a;
    do
    {
        c++;
        w = w*a;
    }
    while(w<b);
    printf("A do potegi %d jest wieksze od B\n",c);
    return 0;
}