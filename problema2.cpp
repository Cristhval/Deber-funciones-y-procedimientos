#include <stdio.h> //Usamos la libreria 

//Problema 2 Inverso de un número
int main(){
int num; //variable para guardar el numero 
int mun = 0;//variable donde guardaremos los valores al invertir el numero
printf("Ingrese un numero para poder invertirlo\n ");
scanf("%d", &num);
for (int i = 0; (i = num); i++)//Hacemos un bucle donde invertiremos el numero
{//Ponemos en parentesis i = num para que no nos de el problema de que nos sugiera usara un () 
//Como un valor de verdad
    mun = mun * 10 + (num % 10);
    num /= 10;
}
printf("El numero invertido es: %d", mun);//damos el resultado

    return mun;
}