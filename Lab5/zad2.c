#include <stdio.h>

int main(int a, int b)
{
    int c = 3;
    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    if(a==b) return 1;
    else return 0;
}