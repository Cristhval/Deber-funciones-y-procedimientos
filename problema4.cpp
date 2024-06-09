#include <stdio.h> //Usamos la libreria 

//Problema 4 Radicación mediante restas sucesivas
int main(){
int num; //numero que ingresaran para sacar la raiz cubica
double resultado = 0;//donde guardamos el resultado
double incremento = 0.001; //con menor incremento se aumenta la precision de la respuesta
printf("Ingrese el numero al que quiere sacar la raiz cubica por medio de restas sucesivas\n");
scanf("%d", &num);
for (double i = 0; i * i * i <= num; i += incremento)//Bucle necesario para llegar a la respuesta de la raiz
{
    resultado = i;
}
printf("La raiz cubica del numero %d es aproximadamente %g", num, resultado);//presentamos los resultados
    return 0;
}