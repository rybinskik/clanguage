#include <stdio.h>

int a = 12;

int wywolaj(int a, int b)
{
    printf("%p, %p", &a, &b);
}
int main()
{
    int b = a;
    printf("%p, %p\n", &a, &b);
    wywolaj(a,b);
    return 0;
}