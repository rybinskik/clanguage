#include <stdio.h>

struct Punkt
{
    int x;
    int y;
}p,q;

int main()
{
    printf("Podaj wspolrzedne dwoch punktow na osi\nax: ");
    scanf("%d",&p.x);
    printf("ay: ");
    scanf("%d",&p.y);
    printf("bx: ");
    scanf("%d",&q.x);
    printf("by: ");
    scanf("%d",&q.y);
    int a = (q.y-p.y)/(q.x-p.x);
    int b = p.y - (a * p.x);
    printf("Rownanie prostej przechodzacej przez te dwa punkty wynosi:\n\n\t");
    if(a=0)
    {
        printf("y=%d",b);
    }
    else if(a=1)
    {
        printf("y=x+%d",b);
    }
    else
    {
        printf("y=%dx+%d",a,b);
    }
    return 0;
}