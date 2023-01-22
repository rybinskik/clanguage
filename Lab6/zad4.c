#include <stdio.h>

 unsigned int fib(int a,int b,int n)
{
    if(n==1)
    {
        return a;
    }
    else
    {
        return fib(b,a+b,--n);
    }
}

int main()
{
    int a = 0;
    int b = 1;
    int n;
    printf("Podaj n-ty wyraz: ");
    scanf("%d",&n);
    printf("%d-ty wyraz ciagu fibonacciego wynosi: %u", n, fib(a,b,n));
    return 0;
}