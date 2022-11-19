#include <stdio.h>

int main()
{
    int dzien,miesiac,rok;
    printf("Podaj dzien (liczba): ");
    scanf("%d",&dzien);
    printf("Podaj miesiac (liczba): ");
    scanf("%d",&miesiac);
    printf("Podaj rok (liczba): ");
    scanf("%d",&rok);
    if(rok>=0&&rok<=2022)
    {
        if(rok%4==0)
        {
            if(miesiac==2)
            {
                if(dzien>=1&&dzien<=29)
                {
                    printf("Data %d.%d.%d jest poprawna data\n",dzien,miesiac,rok);
                }
                else
                {
                    printf("Podana data jest niewlasciwa\n");
                }
            }
            else if(miesiac==1||miesiac==3||miesiac==5||miesiac==7||miesiac==8||miesiac==10||miesiac==12)
            {
                if(dzien>=1&&dzien<=31)
                {
                    printf("Data %d.%d.%d jest poprawna data\n",dzien,miesiac,rok);
                }
                else
                {
                    printf("Podana data jest niewlasciwa\n");
                }
            }
            else if(miesiac==4||miesiac==6||miesiac==9||miesiac==11)
            {
                if(dzien>=1&&dzien<=30)
                {
                    printf("Data %d.%d.%d jest poprawna data\n",dzien,miesiac,rok);
                }
                else
                {
                    printf("Podana data jest niewlasciwa\n");
                }
            }
            else
            {
                printf("Podana data jest niewlasciwa\n");
            }
        }
        else
        {
            if(miesiac==2)
            {
                if(dzien>=1&&dzien<=28)
                {
                    printf("Data %d.%d.%d jest poprawna data\n",dzien,miesiac,rok);
                }
                else
                {
                    printf("Podana data jest niewlasciwa\n");
                }
            }
            else if(miesiac==1||miesiac==3||miesiac==5||miesiac==7||miesiac==8||miesiac==10||miesiac==12)
            {
                if(dzien>=1&&dzien<=31)
                {
                    printf("Data %d.%d.%d jest poprawna data\n",dzien,miesiac,rok);
                }
                else
                {
                    printf("Podana data jest niewlasciwa\n");
                }
            }
            else if(miesiac==4||miesiac==6||miesiac==9||miesiac==11)
            {
                if(dzien>=1&&dzien<=30)
                {
                    printf("Data %d.%d.%d jest poprawna data\n",dzien,miesiac,rok);
                }
                else
                {
                    printf("Podana data jest niewlasciwa\n");
                }
            }
            else
            {
                printf("Podana data jest niewlasciwa\n");
            }
        }
    }
    else
    {
        printf("Podana data jest niewlasciwa\n");
    }  
    return 0;
}