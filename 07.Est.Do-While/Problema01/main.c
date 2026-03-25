#//Estructura Do-While
/*Escribir un programa que solicite la carga de un numero entre 0 y 999, y nos muestre un mensaje de cuantos digitos tiene el mismo
Finalizar el programa cuando se cargue el valor 0
#include <stdio.h>

int main()
{

int num1 =0;

do{
  printf("Ingrese la carga del numero(con 0 se finaliza): ");
  scanf("%d",&num1);

  if(num1 > 0 && num1 <= 9){
  printf("El numero tiene una sola cifra.\n");
  }else if(num1 >= 10 && num1 <= 99){
  printf("El numero tiene dos cifras.\n");
  }else if(num1 >= 100 && num1 <= 999){
  printf("El numero tiene tres cifras.\n");
  }

  }while(num1 != 0);

  printf("Muchas gracias por usar nuestro programa.\n");
    return 0;
}*/

/*Realizar un programa que permita ingresar le peso en kg de piezas.El proceso termina cuando se ingresa el 0. Se debe informar
 * -> Cuantas piezas tienen un peso entre 9.8 kg y 10.2 kg. Cuantas con mas de 10.2kg y cuantas con menos de 9.8 kg
 * -> La Cantidad de piezas procesadas.
#include<stdio.h>
int main(){

  int cant1 = 0;
  int cant2 = 0;
  int cant3 = 0;
  int cantidadTotal = 0;
  float ingresoPiezas = 0;

do{
  printf("Ingrese el peso de la pieza para procesar,(con 0 finaliza el programa): ");
  scanf("%f",&ingresoPiezas);

  if(ingresoPiezas == 0){
  break;
  }

  //Aca se van contando la cantidad de piezas procesadas
  if(ingresoPiezas != 0){
  cantidadTotal++;
  }

  if(ingresoPiezas >= 9.8 && ingresoPiezas <= 10.2){
  cant1++; // Estas piezas tienen entre 9.8 y 10.2
  }else if(ingresoPiezas > 10.2){
  cant2++; // Estas piezas tienen mas de 10.2
  }else if(ingresoPiezas < 9.8){
  cant3++; // Estas piezas tienen menos de 9.8
  }

}while(ingresoPiezas != 0);

  printf("La cantidad de piezas ingresadas son %d\n",cantidadTotal);
  printf("La cantidad de piezas entre 9.8 kg y 10.2kg son %d\n",cant1);
  printf("La cantidad de piezas mayores a 10.2 son %d\n",cant2);
  printf("La cantidad de piezas menores a 9.8 son %d\n",cant3);

}*/

// Nivel 1

// -> Escribir un programa que imprima los numeros del 1 al 10 usando el do while
/*
#include<stdio.h>
int main(){

  int num1 =0;

  do{
    num1++;

    printf("%d\n",num1);

  }while(num1 != 10);

  return 0;
}*/

/* -> Escribir un programa que solicite un numero al usuario y lo siga pidiendo mientras sea negativo. Cuando ingrese un numero positivo
 * , mostrar el numero ingresado
#include<stdio.h>
int main(){
  int num1= 0;

  do{
  printf("Ingrese el numero negativo, si ingresa un positivo termina el programa: ");
  scanf("%d",&num1);

  if(num1 == 0){
  printf("Ingreso 0, es tomado como neutro, el programa continua...\n");
  }

}while(num1 < 1);

  printf("Ingreso un numero positivo, por lo tanto finalizo el programa, el numero es: %d",num1);
}*/

// Nivel 2

/* -> Solicitar al usuario hasta que ingres el 0. Por cada numero indicar si es par o impar

#include<stdio.h>
int main(){
  int num = 0;

  do{
    printf("Ingrese el numero para verificar si es par o impar, si ingresa 0 finaliza el programa: ");
    scanf("%d",&num);

  if(num %2 == 0){
  printf("El numero ingresado es par \n");
  }else {
  printf("Ingreso un numero impar. \n");
  }

  }while(num != 0);

  printf("Ingreso el numero 0, por lo tanto termino el programa");

}*/

/*Pedir un numero entre 1 y 5 (validar que este en este rango) . Una vez ingresado correctamente, mostrar su tabla de multiplicar
 * del 1 al 10
#include<stdio.h>
int main(){

  int num = 0;
  int mul = 0;

do{
  printf("Ingrese un numero entre 1 y 5, si escoge un numero fuera de este rango termina el programa: ");
  scanf("%d",&num);

  if(num < 1 || num > 5){
    break;
  }
  for(int i=1;i<=10;i++){
  mul = num * i;
  printf("%d * %d = %d \n",num,i,mul);
  }

}while(1);

  printf("El numero no esta dentro del rango indicado, finalizara el programa.\n");

  return 0;
}*/

/*Solicitar la carga de numeros hasta que el usuario ingrese 0. Al finalizar mostar la suma total, el mayor numero ingresado y cuantos
 * numeros se ingresaron
#include<stdio.h>
int main(){

  int numeros = 0;
  int sumaTotal=0;
  int mayorNumeroIngresado =0;
  int numerosTotal= 0;

do{
  printf("Ingrese el numero, si ingresa 0 el programa termina: ");
  scanf("%d",&numeros);

  if(numeros == 0){
    break;
  }else{
    numerosTotal++;
  }

  sumaTotal = sumaTotal+numeros;

  if(numeros > mayorNumeroIngresado){
  mayorNumeroIngresado = numeros;
  }


}while(numeros != 0);

printf("La cantidad de numeros ingresados es: %d\n",numerosTotal);
printf("La suma de numeros ingresados es: %d\n",sumaTotal);
printf("El mayor numero ingresado es: %d\n",mayorNumeroIngresado);

  return 0;
}*/

/*Crear un menu con opciones:
 *  1. Sumar dos numeros
 *  2. Restar dos numeros.
 *  3. multiplicar dos numeros.
 *  4. Salir
 *
 *  El menu debe repetirse hasta que el usuario elija salir

#include<stdio.h>
int main(){

  int opcion = 0;
  int num1 = 0;
  int num2 = 0;
  int suma= 0;
  int resta = 0;
  int mult = 0;

do{
  printf("Presione los siguientes numeros para las opciones: \n\n");
  printf(" 1. Sumar dos numeros.\n");
  printf(" 2. restar dos numeros.\n");
  printf(" 3. multiplicar dos numeros.\n");
  printf(" 4. Salir.\n\n");
  scanf("%d",&opcion);

  if(opcion == 1){
  printf("Ingrese el primer numero a sumar: ");
  scanf("%d",&num1);
  printf("Ingrese el segundo numero a sumar: ");
  scanf("%d",&num2);

  suma = num1 + num2;
  printf("La suma de los numeros ingresados es: %d\n\n",suma);
  }else if(opcion == 2){
  printf("Ingrese el primer numero a restar: ");
  scanf("%d",&num1);
  printf("Ingrese el segundo numero a restar: ");
  scanf("%d",&num2);

  resta = num1 - num2;
  printf("La resta de los numeros ingresados es: %d\n\n",resta);
  }else if(opcion == 3){
  printf("Ingrese el primer numero a multiplicar: ");
  scanf("%d",&num1);
  printf("Ingrese el segundo numero a multiplicar: ");
  scanf("%d",&num2);

  mult = num1 * num2;
  printf("La multiplicacion de los numeros ingresados es: %d\n\n",mult);
  }



}while(opcion != 4);

printf("Muchas Gracias por usar nuestro Programa.\n");

return 0;
}*/
