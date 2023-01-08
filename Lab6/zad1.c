#include <stdio.h>

long silnia(int n)
{
    if(n==1)
    {
        return n;
    }
    else
    {
        return n * silnia(n-1);
    }
}

int main()
{
    printf("Wpisz liczbe: ");
    int n = 0;
    scanf("%d",&n);
    printf("Silnia z %d wynosi %d",n,silnia(n));
    return 0;
}