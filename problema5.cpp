#include <stdio.h> //Usamos la libreria 

//Problema 5 Serie de Fibonacci
int main(){
int a=0 , b=1 , c=0; //Variables con valores para la serie fibonacci
int num; //el numero de digitos que presentaremos
int com=1;//condicional para la " , "
printf("Ingrese cuantos numeros de la serie Fibonacci quiere mostrar\n");
scanf("%d", &num);

if (num>=1) //condicional para empezar con la serie con el numero 0
{
    printf("%d , ", a);
}


for (int i = 1; i < num; i++)//condicionamos cuando aparece la " , "
{
    if (!com)
    {
        printf(" , ");
    }
    else
    {
        com = 0;
    }
    c= a+b; //sumamos los numeros para conseguir la serie fibonacci
    printf("%d", b);
    a = b;
    b = c;
}
printf("\n");//salto de linea
printf("Usted imprimo la cantidad de %d digitos de la serie Fibonacci ",num);//mostramos el resultado


    return 0;
}