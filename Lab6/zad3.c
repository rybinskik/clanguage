#include <stdio.h>
#include <string.h>

long ciag(int n)
{
    if(n<=0)
    {
        return 1;
    }
    else
    {
        ciag(n-1);
        printf("%d ",n);
    }
}

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d",&n);
    ciag(n);
}