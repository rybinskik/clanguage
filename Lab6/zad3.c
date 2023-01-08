#include <stdio.h>
#include <string.h>

void ciag(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        ciag(n-1);
    }
}

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d",&n);
    ciag(n);
}