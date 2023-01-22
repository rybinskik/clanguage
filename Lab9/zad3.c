#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Punkt
{
    int x;
    int y;
}punkt;

typedef struct Trójkąt
{
    punkt a;
    punkt b;
    punkt c;
}trójkąt;

int main()
{
    trójkąt t;
    printf("Siema, sprawa jest\nPodaj wspolrzedne punktow a, b i c,\nSprawdzimy czy mozemy zrobic z tego trojkat\nax: ");
    scanf("%i",&t.a.x);
    printf("ay: ");
    scanf("%i",&t.a.y);
    printf("bx: ");
    scanf("%i",&t.b.x);
    printf("by: ");
    scanf("%i",&t.b.y);
    printf("cx: ");
    scanf("%i",&t.c.x);
    printf("cy: ");
    scanf("%i",&t.c.y);
    float ab = sqrt(pow(t.a.x-t.b.x,2)+pow(t.a.y-t.b.y,2));
    float bc = sqrt(pow(t.b.x-t.c.x,2)+pow(t.b.y-t.c.y,2));
    float ac = sqrt(pow(t.a.x-t.c.x,2)+pow(t.a.y-t.c.y,2));
    printf("No bylo tego troche, ale sprawdzmy czy mozna zrobic z tego trojkat\nNacisnij ENTER, zeby sprawdzic\n");
    char c = 'c';
    fflush(stdin);
    while(c != '\n')
    {
        scanf("%c",&c);
        if(c = '\n') break;
    }
    if((ab+bc)>ac&&(ab+ac)>bc&&(bc+ac)>ab)
    {
        printf("No da sie");
        exit(0);
    }
    else
    {
        printf("No nie da sie\nnie bede tlumaczyl czemu\nbo to bylo w podstawowce lol");
        exit(0);
    }
    return 0;
}