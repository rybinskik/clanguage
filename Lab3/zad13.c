#include <stdio.h>

int main()
{
    int r,i,s;
    printf("Dla 0 rad wybierz 0\nDla 1/6 Pi rad wybierz 1\nDla 1/4 Pi rad wybierz 2\nDla 1/3 Pi rad wybierz 3\nDla 1/2 Pi rad wybierz 4\n>");
    scanf("%d",&r);
    for(i=0;i<=r;++i)
    {
        if(i=r)
        {
            s = i * 30;
            printf("Wybrana liczba w radianach to %d stopni",s);
            break;
        }
    }
    return 0;
}