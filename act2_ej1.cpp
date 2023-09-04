//Hernandez Ceseña Ivan Fernando  373077
// 29/08/23
// suma, resta, multiplicacion, division
//NYP_ACT1_1_932

#include <stdio.h>

int main()
{
    int opcion;
    float num1, num2, res;

    printf("que operacion quieres hacer?\n");
    printf("1) suma\n2) resta\n3) multiplicacion\n4)division\n");
    scanf("%d",& opcion);
    printf("dame el primer numero de la operacion: ");
    scanf("%f",& num1);
    printf("dame el segundo numero de la operacion: ");
    scanf("%f",& num2);

    if(opcion>0)
    {
        if(opcion>1)
        {
            if(opcion>2)
            {
                if(opcion>3)
                {
                    res= num1 / num2;
                    printf("el resultado de la division es: %f", res);
                }
                else
                {
                    res= num1 * num2;
                    printf("el resultado de la multiplicacion es: %f", res);  
                }
            }
            else
            {
                res= num1 - num2;
                printf("el resultado de la resta es: %f", res);
            }
        }
        else
        {
            res= num1 + num2;
            printf("el resultado de la suma es: %f", res);
        }
    }
    return 0;
}