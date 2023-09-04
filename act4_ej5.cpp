//Hernandez Ceseña Ivan Fernando  373077
// 03/09/23
//Total de una llamada telefónica local, nacional, internacional
//NYP_ACT2_5_932

#include <stdio.h>

int main()
{
    int opcion, min, subtotal;
    float iva, total;

   
    printf("\n1) local\n2) nacional\n3) internacional\n"); 
    printf("tipo de llamada: ");
    scanf("%d",& opcion);
    printf("minutos de la llamada: ");
    scanf("%d",& min);

    if(opcion>1)
    {
        if(opcion>2)
        {
            if(opcion>3)
            {
                printf("opcion de llamada incorrecta");
            }
            else
            {
            subtotal= (2 * 9) + (4 * (min-2));
            iva= subtotal * 0.16;
            total= subtotal + iva;
            printf("\nsubtotal: %d\n", subtotal);
            printf("iva: %f\n", iva);
            printf("total: %f\n", total);
            }
        }
        else
        {
            subtotal= (3 * 7) + (2 * (min-3));
            iva= subtotal * 0.16;
            total= subtotal + iva;
            printf("\nsubtotal: %d\n", subtotal);
            printf("iva: %f\n", iva);
            printf("total: %f\n", total);
        }
    }
    else
    {
        subtotal= 3 * min;
            iva= subtotal * 0.16;
            total= subtotal + iva;
            printf("\nsubtotal: %d\n", subtotal);
            printf("iva: %f\n", iva);
            printf("total: %f\n", total);
    }
    return 0;
}