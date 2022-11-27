#include <stdio.h>

int main()
{
    int a, b, i=2;
    printf("Podaj a: ");
    scanf("%d",&a);
    printf("Podaj b: ");
    scanf("%d",&b);
    int w = a;
    if(b==0)
    {
        printf("Liczba %d do potegi %d jest rowna 1 \n", a, b);
    }
    else if(b==1)
    {
        printf("Liczba %d do potegi %d jest rowna %d\n", a, b, a);
    }
    else
    {
        while(i<=b)
        {
            w = w*a;
            i++;
        }
    printf("Liczba %d do potegi %d wynosi %d\n", a, b, w);
    }
    return 0;
}