#include <stdio.h>

int main()
{
    int n, i=1, s=0, p=0;
    printf("Podaj n: ");
    scanf("%d",&n);
    do
    {
        s += i*i;
        i++;
    }
    while(i<=n);
    printf("suma kwadratow liczb od 1 do %d wynosi %d\n", n, s);
    return 0;
}