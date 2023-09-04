//Hernandez Ceseña Ivan Fernando  373077
// 03/09/23
//consumo agua
//NYP_ACT2_6_932

#include <stdio.h>

int main()
{
    int cons, subtotal;
    float iva, total;

    printf("consumo total M3: ");
    scanf("%d",& cons);

    if(cons>4)
    {
        if(cons>15)
        {
            if(cons>50)
            {
                subtotal= cons * 11;
                iva= subtotal * 0.16;
                total= subtotal + iva;
                printf("\nsubtotal: %d\n", subtotal);
                printf("iva: %f\n", iva);
                printf("total: %f\n", total);
            }
            else
            {
                subtotal= cons * 10;
                iva= subtotal * 0.16;
                total= subtotal + iva;
                printf("\nsubtotal: %d\n", subtotal);
                printf("iva: %f\n", iva);
                printf("total: %f\n", total);
            }
        }
        else
        {
            subtotal= cons * 8;
            iva= subtotal * 0.16;
            total= subtotal + iva;
            printf("\nsubtotal: %d\n", subtotal);
            printf("iva: %f\n", iva);
            printf("total: %f\n", total);
        }
    }
    else
    {
        subtotal= 50;
        iva= subtotal * 0.16;
        total= subtotal + iva;
        printf("\nsubtotal: %d\n", subtotal);
        printf("iva: %f\n", iva);
        printf("total: %f\n", total);
    }
    return 0;
}