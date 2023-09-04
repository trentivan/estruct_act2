//Hernandez Ceseña Ivan Fernando  373077
// 03/09/23
//salario semanal
//NYP_ACT2_4_932

#include <stdio.h>

int main()
{
    int horasT, salario_h,salario_n, salario_ex, salario_t;

    printf("dame el total de tus horas trabajadas: ");
    scanf("%d",& horasT);
    printf("\ndame tu salario por hora: ");
    scanf("%d",& salario_h);

    if(horasT>40)
    {
        if(horasT>49)
        {
            salario_n= 40 * salario_h;
            salario_ex= ((horasT - 49) * salario_h * 3) + (9 * 2 * salario_h);
            salario_t= salario_n + salario_ex;
            printf("horas trabajadas: %d\n",horasT);
            printf("salario x hora: %d\n",salario_h);
            printf("salario normal: %d\n",salario_n);
            printf("salario extra: %d\n",salario_ex);
            printf(" salario total: %d\n",salario_t);
        }
        else
        {
            salario_n= 40 * salario_h;
            salario_ex= (horasT -40) * 2 * salario_h;
            salario_t= salario_n + salario_ex;
            printf("horas trabajadas: %d\n",horasT);
            printf("salario x hora: %d\n",salario_h);
            printf("salario normal: %d\n",salario_n);
            printf("salario extra: %d\n",salario_ex);
            printf(" salario total: %d\n",salario_t);
        }
    }
    else
    {
        salario_n= horasT * salario_h;
        salario_t= salario_n;
        printf("horas trabajadas: %d\n",horasT);
        printf("salario x hora: %d\n",salario_h);
        printf("salario normal: %d\n",salario_n);
        printf(" salario total: %d\n",salario_t);
    }
    return 0;
}