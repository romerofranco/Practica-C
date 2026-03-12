// -> Estructuras Condicionales Simples y Compuestos

//Problema 1 -> Ingresar el sueldo de una persona, si supera los 3000 pesos mostrar un mensaje en pantalla
/*

#include <stdio.h>
int main()
{

  int sueldo = 0;

  printf("Ingrese el sueldo de la persona: ");
  scanf("%d",&sueldo);


  if(sueldo > 3000){
  printf("Su sueldo es mayor a 3000, por lo tanto tendra que pagar sueldos");
  }else{
  printf("Su sueldo no excede los 3000, estan excento del pago.");
  }

    return 0;
}*/

//Problema 2 -> Realizar un programa que solicite al operador ingresar dos numeros y muestre por pantalla el mayor de ellos
/*
#include<stdio.h>
int main(){

  int num1 = 0;
  int num2 = 0;

  printf("Ingrese el primer numero: ");
  scanf("%d",&num1);
  printf("Ingrese el segundo numero: ");
  scanf("%d",&num2);

  if(num1>num2){
    printf("%d",num1);
  }else if(num1<num2){
    printf("%d",num2);
  }

  return 0;
}*/

//Problema 3 -> Realiza un programa que solicite la carga por teclado de dos numeros, si el primero es mayor al segundo informe su suma
// y diferencia, en caso contrario informar el producto y la division del primero respecto al segundo
/*
#include<stdio.h>
int main(){
  int num1=0;
  int num2=0;

   int suma = 0 ;
  int dif= 0;
  int producto = 0 ;
  float div=0;

  printf("Ingrese el primero numero: ");
  scanf("%d",&num1);
  printf("Ingrese el segundo numero: ");
  scanf("%d",&num2);

  if(num1 > num2){
  suma = num1 + num2;
  dif = num1 - num2;
  printf("La suma es -> %d\n",suma);
  printf("La diferencia es -> %d\n",dif);

  }else if(num1 < num2){
  producto = num1 * num2;
  div = (float)num1 / num2;
  printf("El producto es -> %d\n",producto);
  printf("La division es -> %.2""f\n",div);
  }
  return 0;
}*/

//Problema 4 -> Se ingresan tres notas de un alumno, si el promedio es mayor o igual a siete mostrar un mensaje "Promocionado"
/*
#include<stdio.h>
int main(){

  int nota1 = 0;
  int nota2 = 0;
  int nota3 = 0;
  int suma = 0;
  int promedio = 0;

  printf("Ingrese la primera nota: ");
  scanf("%d",&nota1);
  printf("Ingrese la segunda nota: ");
  scanf("%d",&nota2);
  printf("Ingrese la tercera nota: ");
  scanf("%d",&nota3);

  suma = nota1 + nota2 + nota3;
  promedio = suma / 3;

  if(promedio > 7){
  printf("Promocionado");
  }else{
  printf("No Promociono");
  }

  return 0;
}*/

//Problema 5:
//Se ingresa por teclado un numero positivo de uno o dos digitos, mostrar un mensaje indicando si el numero tiene uno o dos digitos.
#include<stdio.h>
int main(){

  int num1 = 0;

  printf("Ingrese el numero a analizar: ");
  scanf("%d",&num1);

  if(num1>=0 && num1<= 9){
  printf("El numero ingresado tiene un digito");
}else if(num1>=10 && num1 <= 99){
  printf("El numero ingresado tiene dos digitos");
}

}
