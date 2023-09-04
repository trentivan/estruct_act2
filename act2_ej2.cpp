//Hernandez Ceseña Ivan Fernando  373077
// 29/08/23
//unidades de medida
//NYP_ACT2_2_932

#include <stdio.h>

int main()
{
    int opcion;
    float num, conv;

    printf("1) CM A PULGADAS\n2) CM A PIES\n3) KM A MILLAS\n4) PULGADAS A CM\n5) PIES A CM\n6) MILLAS A KM\n");
    printf("QUE CONVERSION QUUIERES HACER?\n");
    scanf("%d",& opcion);
    printf("DAME EL VALOR A CONVERTIR: \n");
    scanf("%f",& num);

    if(opcion>0) //1
    {
        if(opcion>1) //2
        {
            if(opcion>2) //3
            {
                if(opcion>3) //4
                {
                    if(opcion>4) //5
                    {
                        if(opcion>5)
                        {
                            conv= num * 1.60934;
                            printf("%f MILLAS = %f KM", num, conv);
                        }
                    }
                    else
                    {
                        conv= num * 30.48;
                        printf("%f PIES = %f CM", num, conv);
                    }
                }
                else
                {
                    conv= num * 2.54;
                    printf("%f PULGADAS = %f CM", num, conv);
                }
            }
            else
            {
                conv= num * 0.621371;
                printf("%f KM = %f MILLAS", num, conv);
            }
            
        }
        else
        {
            conv= num * 0.0328084;
            printf("%f CM = %f PIES", num, conv);
        }
    }
    else
    {
        conv= num * 0.0393701;
        printf("%f CM = %f PULGADAS", num, conv);
    }
    return 0;
}