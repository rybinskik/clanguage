#include <stdio.h>
#include <string.h>

int main(int i,char s[])
{
    printf("Napis: ");
    scanf("%s",s);
    printf("i-ty znak napisu: ");
    scanf("%d",&i);
    printf("%c\n",s[i]);
    return 0;
}
