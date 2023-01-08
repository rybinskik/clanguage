#include <stdio.h>

int main()
{
    //robimy tablicę na sztywno
    int tab[5] = {6,2,5,4,11};
    int new[5];
    int a;
    for(int i=0;i<=5-1;i++)
    {
        a = tab[i];
        new[i] = (a*a);
        printf("%d ",new[i]);
    }
    return 0;
}