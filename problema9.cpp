#include <stdio.h> //Usamos la libreria  

//Problema 9 Número de dígitos de un número
int main(){
int num;//Variable para el numero que vamos a ingresar
int digitos = 1;//Variable para contar los digitos
printf("Ingrese un numero para contar sus digitos\n");
scanf("%d", &num);
while (num>=10)//hacemos un bucle para contar los digitos de un numero
{
    num = num/10;
    digitos++;
}
printf("El numero tiene %d digitos",digitos);//Presentamos el resultado


    return 0;
}