//Hernandez Ceseña Ivan Fernando  373077
// 03/09/23
//Programa en C que lea 6 números 
//NYP_ACT2_3_932

#include <stdio.h>

int  main()
{
    int num1, num2, num3, num4, num5, num6;

    printf("dame  el primer numero \n");
    scanf("%d",& num1);
    printf("dame  el segundo numero \n");
    scanf("%d",& num2);
    printf("dame  el tercer numero \n");
    scanf("%d",& num3);
    printf("dame  el cuarto numero \n");
    scanf("%d",& num4);
    printf("dame  el quinto numero \n");
    scanf("%d",& num5);
    printf("dame  el sexto numero \n");
    scanf("%d",& num6);

    if(num1>num2)
    {
        if(num1>num3)
        {
            if(num1>num4)
            {
                if(num1>num5)
                {
                    if(num1>num6)
                    {
                        printf("el numero mayor es %d", num1);
                    }
                    else
                    {
                        printf("el numero mayor es %d", num6);
                    }
                }
                else
                {
                    if(num5>num6)
                    {
                        printf("el numero mayor es %d", num5);
                    }
                    else
                    {
                        printf("el numero mayor es %d", num6);
                    }
                }
            }
            else
            {
                if(num4>num5)
                {
                    if(num4>num6)
                    {
                        printf("el numero mayor es %d", num4);
                    }
                    else
                    {
                        printf("el numero mayor es %d", num6);
                    }
                }
                else
                {
                    if(num5>num6)
                    {
                        printf("el numero mayor es %d", num5);
                    }
                    else
                    {
                        printf("el numero mayor es %d", num6);
                    }
                }
            }
        }
        else
        {
            if(num3>num4)
            {
                if(num3>num5)
                {
                    if(num3>num6)
                    {
                        printf("el numero mayor es %d", num3);
                    }
                    else
                    {
                        printf("el numero mayor es %d", num6);
                    }
                }
                else
                {
                    if(num5>num6)
                    {
                        printf("el numero mayor es %d", num5);
                    }
                    else
                    {
                        printf("el numero mayor es %d", num6);
                    }
                }
            }
            else
            {
                if(num4>num5)
                {
                    if(num4>num6)
                    {
                        printf("el numero mayor es %d", num4);
                    }
                    else
                    {
                        printf("el numero mayor es %d", num6);
                    }
                }
                else
                {
                    if(num5>num6)
                    {
                        printf("el numero mayor es %d", num5);
                    }
                    else
                    {
                        printf("el numero mayor es %d", num6);
                    }
                }
            }
        }
    }
    else
    {
        if(num2>num3)
        {
            if(num2>num4)
            {
                if(num2>num5)
                {
                    if(num2>num6)
                    {
                        printf("el numero mayor es %d", num2);
                    }
                    else
                    {
                        printf("el numero mayor es %d", num6);
                    }
                }
                else
                {
                    if(num5>num6)
                    {
                        printf("el numero mayor es %d", num5);
                    }
                    else
                    {
                        printf("el numero mayor es %d", num6);
                    }
                }
            }
            else
            {
                if(num4>num5)
                {
                    if(num4>num6)
                    {
                        printf("el numero mayor es %d", num4);
                    }
                    else
                    {
                        printf("el numero mayor es %d", num6);
                    }
                }
                else
                {
                    if(num5>num6)
                    {
                        printf("el numero mayor es %d", num5);
                    }
                    else
                    {
                        printf("el numero mayor es %d", num6);
                    }
                }
            }
        }
        else
        {
            if(num3>num4)
            {
                if(num3>num5)
                {
                    if(num3>num6)
                    {
                        printf("el numero mayor es %d", num3);
                    }
                    else
                    {
                        printf("el numero mayor es %d", num6);
                    }
                }
                else
                {
                    if(num5>num6)
                    {
                        printf("el numero mayor es %d", num5);
                    }
                    else
                    {
                        printf("el numero mayor es %d", num6);
                    }
                }
            }
            else
            {
                if(num4>num5)
                {
                    if(num4>num6)
                    {
                        printf("el numero mayor es %d,", num4);
                    }
                    else
                    {
                        printf("el numero mayor es %d", num6);
                    }
                }
                else
                {
                    if(num5>num6)
                    {
                        printf("el numero mayor es %d", num5);
                    }
                    else
                    {
                        printf("el numero mayor es %d",num6);
                    }
                }
            }
        }
    }
    return 0;
}