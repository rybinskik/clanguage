#include <stdio.h>
//Program bierze pod uwagę prostokąt, którego boki są równoległe odpowiednio do osi x i y
int main()
{
    int x1,x2,y1,y2,a,b,obw,pol;
    printf("Podaj x pierwszego wierzcholka: ");
    scanf("%d",&x1);
    printf("Podaj y pierwszego wierzcholka: ");
    scanf("%d",&y1);
    printf("Podaj x drugiego wierzcholka: ");
    scanf("%d",&x2);
    printf("Podaj y drugiego wierzcholka: ");
    scanf("%d",&y2);
    if(x1>x2&&y1>y2)
    {
        a = x1-x2;
        b = y1-y2;
        obw = a+b;
        pol = a*b;
        printf("Obwod prostokata jest rowny %d\n",obw);
        printf("Pole prostokata jest rowne %d\n",pol);
    }
    else if(x1>x2&&y1<y2)
    {
        a = x1-x2;
        b = y2-y1;
        obw = a+b;
        pol = a*b;
        printf("Obwod prostokata jest rowny %d\n",obw);
        printf("Pole prostokata jest rowne %d\n",pol);
    }
    else if(x1<x2&&y1>y2)
    {
        a = x2-x1;
        b = y1-y2;
        obw = a+b;
        pol = a*b;
        printf("Obwod prostokata jest rowny %d\n",obw);
        printf("Pole prostokata jest rowne %d\n",pol);
    }
    else if(x1<x2&&y1<y2)
    {
        a = x2-x1;
        b = y2-y1;
        obw = a+b;
        pol = a*b;
        printf("Obwod prostokata jest rowny %d\n",obw);
        printf("Pole prostokata jest rowne %d\n",pol);
    }
    return 0;
}