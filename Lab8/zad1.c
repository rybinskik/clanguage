#include <stdio.h>
#include <limits.h>

int main()
{
    FILE *fp;
    fp = fopen("parzyste.txt","w");
    char tekst;
    while(tekst != EOF)
    {
        tekst = fgetc(fp);
    }
    fclose(fp);
    return 0;
}