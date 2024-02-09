#include <stdio.h> 
#include <iostream>
#include <math.h>
/*
variables
float
val1 = primer valor a operar
val2 = segundo valor a operar
char
op = operador a selecionar
*/

int main ()
{
    float val1, val2, total;//se hace incapie de lo que vamos a usar para almacenar
    char op;
    printf("Menu de operaciones basicas\n");//se inprime el menjase que se quiere mostrar
    printf("------------------------\n");
    printf("+  Suma\n-  Resta\n/  Divison\n*  Multiplicacion\no/o	Porcentaje\n");//nota: no muestra este simbolo % creo que es porque es para hacer operaciones.
    printf("------------------------\n");
    printf("Ingrese el simbolo de la operacion que decea\n");
    scanf("%c",&op);
    printf("Ingrese primer numero\n");
    scanf("%f",&val1);
    printf("Ingrese segundo numero\n");
    scanf("%f",&val2);
    printf("------------------------\n\n");
    
    switch (op)//usamo estafuncion para las opciones
    {
        case '+'://para selecionar la opcion por medio de este simbolo que pongan.
            printf("El Resultado de %.2f + %.2f = %.2f\n",val1,val2,val1+val2);//se resaliza la operacion y da el resultado; igual con las demas.
            break;
        case '-':
            printf("El Resultado de %.2f - %.2f = %.2f\n",val1,val2,val1-val2);
            break;
        case '*':
            printf("El Resultado de %.2f * %.2f = %.2f\n",val1,val2,val1*val2);
            break;
        case '/':
            printf("El Resultado de %.2f / %.2f = %.2f\n",val1,val2,val1/val2);
            break;
        case '%':
            printf("El Resultado de %.2f % %.2f = %.2f\n",val1,val2,val1/val2);
            break;
        default:
            printf("ERROR - OPERADOR INCORRECTO\n");
            break;
    }


    return 0;
}
//nota no pude combinar las dos librerias o es cout o es printf
