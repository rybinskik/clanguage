#include <stdio.h>

void zamien(int* x, int* y)
{
    int swap = *x;
    *x = *y;
    *y = swap;
}
int main(void)
{
    int a = 12;
    int b = 13;

    printf("Przed zamiana: %d, %d\n", a, b);

    zamien(&a,&b);

    printf("Przed zamiana: %d, %d\n", a, b);

    return 0;
}