#include <stdio.h> //Usamos la libreria  

//Problema 14 Suma de los cuadrados de los primeros n números
int main(){
int num;//numero de cuadrados que queremos sumar
int suma = 0;//variable para la suma
int signo = 1;//variable para colocar el signo "^2 + "
printf("Ingrese el numero de cuadrados que desea sumar\n");
scanf("%d", &num);
for (int i = 1; i <= num; i++)//Hacemos un bucle donde haremos la suma de cuadrados
{
    if (!signo)//condicionamos que aparezca "^2 + "
    {
        printf("^2 + ");
    }
    else
    {
        signo = 0;
    }
    printf("%d", i); //imprimimos la serie
    suma +=i*i;//conseguimos los cuadrados y los sumamos
}
printf("^2");//para que aparezca en el ultimo cuadrado
printf("\n");
printf("La suma de los cuadrados de los numeros es: %d",suma);//presentamos el resultado

    return 0;
}