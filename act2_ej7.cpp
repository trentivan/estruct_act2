//Hernandez Ceseña Ivan Fernando  373077
// 03/09/23
//promedio promedio sin menor calificacion
//NYP_ACT2_7_932

#include <stdio.h>

int main()
{
    int cal1, cal2, cal3, cal4, cal5, men;
    float prom;

    printf("primer calificacion: ");
    scanf("%d",& cal1);
    printf("\nsegunda calificacion: ");
    scanf("%d",& cal2);
    printf("\ntercer calificacion: ");
    scanf("%d",& cal3);
    printf("\ncuarta calificacion: ");
    scanf("%d",& cal4);
    printf("\nquinta calificacion: ");
    scanf("%d",& cal5);

    if(cal1<cal2)
    {
        if(cal1<cal3)
        {
            if(cal1<cal4)
            {
                if(cal1<cal5)
                {
                    men=cal1;
                }
                else
                {
                    men=cal5;
                }
            }
            else
            {
                if(cal4<cal5)
                {
                    men=cal4;
                }
                else
                {
                    men=cal5;
                }
            }
        }
        else
        {
            if(cal3<cal4)
            {
                if(cal3<cal5)
                {
                    men=cal3;
                }
                else
                {
                    men=cal5;
                }
            }
            else
            {
                if(cal4<cal5)
                {
                    men=cal4;
                }
                else
                {
                    men=cal5;
                }
            }
        }
    }
    else
    {
        if(cal2<cal3)
        {
            if(cal2<cal4)
            {
                if(cal2<cal5)
                {
                    men=cal2;
                }
                else
                {
                    men=cal5;
                }
            }
            else
            {
                if(cal4<cal5)
                {
                    men=cal4;
                }
                else
                {
                    men=cal5;
                }
            }
        }
        else
        {
            if(cal3<cal4)
            {
                if(cal3<cal5)
                {
                    men=cal3;
                }
                else
                {
                    men=cal5;
                }
            }
            else
            {
                if(cal4<cal5)
                {
                    men=cal4;
                }
                else
                {
                    men=cal5;
                }
            }
        }
    }
    
    prom= (cal1 + cal2 + cal3 + cal4 + cal5 - men)/4;
    printf("promedio: %f", prom);
}