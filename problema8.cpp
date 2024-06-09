#include <stdio.h> //Usamos la libreria 

//Problema 8 Producto de una serie geométrica
int main(){
int serie;//Variable para la serie geometrica
int num;//variable de los numeros a multiplicar
int sig = 1;//condicional para colocar la " , "
int ser=1;//variable para presentar la serie
int prod = 1;//variable para calcular el producto de los numeros
int a=1, b=1;//auxiliares para multiplicar
printf("Ingrese cuantos digitos desea presentar de la serie geometrica\n");
scanf("%d", &serie);
printf("Ingrese cuantos numeros de la serie desea multiplicar\n");
scanf("%d", &num);
for (int i = 1; i < serie; i++)//ciclo para presentar la serie
{
    if (!sig)//condicionamos cuando aparecer la " , "
    {
        printf(" , ");
    }
    else
    {
        sig = 0;
    }
    ser *= a * 2;
    printf("%d", ser);
}
for (int ii = 0; ii < num; ii++)//Realizamos la multiplicacion de los numeros
{
    prod *= b*2;
    b*=2;
}
printf("\n");
printf("El resultado del producto de los %d primeros numeros de la serie es %d",num, prod);//Presentamos la respuesta

    return 0;
}