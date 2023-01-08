#include <stdio.h>

int main()
{
    int n,i;
    printf("Podaj n: ");
    scanf("%d",&n);
    for(i=2;i<=n;++i);
    {
        if(n%i==0)
        {
            printf("Liczba %d nie jest liczba pierwsza",n);
        }
        if(i==n)
        {
            printf("Liczba %d jest liczba pierwsza",n);
        }
    }
    printf("");
    return 0;
}