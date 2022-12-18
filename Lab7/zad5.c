#include <stdio.h>

void sortuj(int*a,int*b,int*c)
{
    if(*a>*b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    if(*b>*c)
    {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
    if(*a>*b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
int main()
{
    int a,b,c;
    scanf("%d", a);
    scanf("%d", b);
    scanf("%d", c);

    sortuj(&a,&b,&c);

    printf("%d, %d, %d\n", a,b,c);
}