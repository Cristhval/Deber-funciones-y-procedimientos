#include <stdio.h> //Usamos la libreria 

//Problema 1 Suma de los dígitos de un número
int main(){
int num; //Creamos la variable para guardar el numero que ingresaremos
int suma = 0;//Variable para sumar los digitos
int primerdig = 1;//variable que usaremos para imprimir el "+"
int digito;//variable donde guardameros los numeros por separado
printf("Ingrese un numero para sumar sus digitos\n ");
scanf("%d", &num);

if (num<0)//Usamos un if para evitar errores al ingresar un numero negativo
{
    num = -num; 
}

while (num>0) //Utilizamos el bucle while para separar los digitos del numero
{
    if (!primerdig)//Condicionamos el "+" para imprimir la secuencia 
    {
        printf(" + ");
    }
    else
    {
        primerdig = 0;
    }
    
    digito = num % 10; //separamos los digitos
    suma += digito;//sumamos los digitos por separado
    printf("%d", digito);//imprimimos los digitos
    num /=10;//Eliminamos los digitos sumados para poder finalizar el bucle
    
}
printf("\n");//Utilizamos un salto de linea para separar los textos 
printf("El resultado de la suma es: %d\n" ,suma); //Presentamos el resultado

    return suma;
}