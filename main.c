/* While -> Realizar un programa que imprima en pantalla los numeros del 1 al 100
#include <stdio.h>

int main()
{

  int i = 1;

  while(i <= 100){
  printf("%d - ",i);
  i++;
    }

    return 0;
}*/

/* imprimir los numeros del 1 al 500
 * Imprimit los numeros del 50 al 100
 * Imprimir los numeros del -50 al 0.
 * Imprimi los numeros del 2 al 100 pero de 2 en 2.

#include<stdio.h>
int main(){

  int num1 = 1;
  int num2 = 50;
  int num3 = -50;
  int num4 = 2;

  // Problema 1
  printf("Problema 1: \n");
  while(num1 <= 500){
  printf("%d\n",num1);
  num1++;
}
  printf("----------------\n");

//Problema 2
  printf("Problema 2: \n");
  while(num2 <= 100){
  printf("%d\n",num2);
  num2++;
}
 printf("*******************\n");

  printf("Problema 3: \n");

  while(num3 <= 0){
  printf("%d\n",num3);
  num3++;
}

  printf("Problema 4: \n");

  while(num4 <= 100){
  printf("%d\n",num4);
  num4 = num4 + 2;

}
  return 0;
}*/

/* Escribir un programa que solicite la carga de un valor positivo y nos muestre desde el 1 hasta el valor ingresado de uno en uno

#include<stdio.h>
int main(){

  int x = 1;
  int i = 0;

  printf("Ingrese el valor hasta donde ira el contador: ");
  scanf("%d",&i);

  while(x <= i){
  printf("%d\n",x);
  x++;
}
  return 0;

}*/

/*Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre postreriormente la suma de los valores
 * ingresados y su promedio
#include<stdio.h>
int main(){

  int i = 0;
  int x = 0;
  int suma = 0;
  int promedio = 0;

  while(x < 10){
  printf("Ingrese el valor %d: ",i+1);
  scanf("%d",&i);
  suma = suma + i;
    x++;
}
  promedio = suma /10;
  printf("El promedio de los numeros ingresados es: %d\n",promedio);

  return 0;
}*/

/* Una planta que fabrica perfiles de hierro posee un lote de n piezas.
 * Confecciona un programa que pida ingresar por teclado la cantidad de piezas a procesar y luego ingrese la longitud de cada perfil
 * sabiendo que la pieza cuya longitud este comprendida en el rango de 1.20 y 1.30 son aptas. Imprimir por pantalla la cantidad
 * de piezas aptas que hay en el lote

#include<stdio.h>
int main(){

  int cantidadDePiezas =0;
  float medidaDeCadaPieza = 0;
  int piezasAptas = 0;
  int piezasNoAptas =0;
  int i = 1;

  printf("Ingrese la cantidad de piezas a Procesar: ");
  scanf("%d",&cantidadDePiezas);

  while(i<= cantidadDePiezas){
  printf("Ingrese la medida de la pieza: ");
  scanf("%f",&medidaDeCadaPieza);

  if(medidaDeCadaPieza >= 1.20 && medidaDeCadaPieza <= 1.30){
  piezasAptas++;
  }else{
  piezasNoAptas++;
  }

  i++;
  }

  printf("La cantidad de piezas Aptas son: %d\n",piezasAptas);
  printf("La cantidad de Piezas No aptas son: %d\n",piezasNoAptas);

  return 0;
}*/

/*Escribir un programa que solicite ingresar 10 notas de alumnos y
 * nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.
#include<stdio.h>
int main(){

  int notas =0;
  int i = 1;
  int mayorOIgual = 0;
  int menores = 0;

  while(i <= 10){

  printf("Ingrese la nota del alumno %d: ",i);
  scanf("%d",&notas);
  if(notas >= 7){
  mayorOIgual++;
  }else if(notas > 7){
  menores++;
  }
  i++;
}

  printf("Los alumnos mayores o igual a 7 fueron: %d\n",mayorOIgual);
  printf("Los alumnos que sacaron menos de 7 son: %d\n",menores);

  return 0;
}*/

/*Realizar un programa que imprima 25 terminos de la serie 11-22...
#include<stdio.h>
int main(){

  int num = 0;
  int i = 0;

  while (i<=25){
  printf("%d\n",num);
  num= num + 11;
  i++;
  }

  return 0;
}*/

/*Mostrar todos los multiplos de 8 que hay hasta el valor 500

#include<stdio.h>
int main(){
  int num8 = 0;
  int i = 0;
  int x = 64;

  while(i <= x){
    num8 = num8 + 8;
    if(num8 >= 500){
      printf("500\n");
      break;
    }
    printf("%d\n",num8);
    i++;
  }
  return 0;
} */

/* Realizar un programa que permita cargar dos listas de 15 valores cada una. Informar con un mensaje cual de las dos listas tiene
 * un valor acumulado mayor (mensaje "Lista 1 mayor", "Lista 2 mayor", "Listas iguales) . Tener en cuenta que puede haber dos o mas
 * estructuras repetitivas en el algoritmo

#include<stdio.h>
int main(){

  int x = 1;
  int i = 1;
  int listaUno = 1;
  int listaDos= 1;
  int acumuladoUno = 0;
  int acumuladoDos = 0;

  while(x <= 15){
    printf("Lista A-Numero %d: ",x);
    scanf("%d",&listaUno);

    acumuladoUno = acumuladoUno + listaUno;
    x++;
  }
  printf("***************************\n");

  while(i <= 15){
  printf("Lista B-Numero %d: ",i);
  scanf("%d",&listaDos);

  acumuladoDos = acumuladoDos + listaDos;
  i++;
}

  if(acumuladoUno>acumuladoDos){
  printf("La Lista A es mayor a la B\n");
  }else if (acumuladoUno<acumuladoDos){
  printf("La lista B es mayor que la A\n");
  }else if(acumuladoUno == acumuladoDos){
  printf("Las listas tienen los mismo valores\n");
  }

  printf("El resultado de la primera lista es: %d\n",acumuladoUno);
  printf("El resultado de la segunda lista es: %d\n",acumuladoDos);

  return 0;
}*/

/*Desarrollar un programa que permita cargar n numeros enteros y luego nos informe cuantos valores fueron pares y cuantos impares*/
#include<stdio.h>
int main(){

  int cargaNum = 0;
  int i = 0;
  int pares = 0;
  int impares = 0;
  int numeros = 0;

  printf("Ingrese la cantidad de numeros a procesar: ");
  scanf("%d",&cargaNum);

  while(i < cargaNum){
  printf("Ingrese el numero %d: ",i+1);
  scanf("%d",&numeros);

  if(numeros %2 == 0){
  pares ++;
  }else{
  impares++;
  }

  i++;
}

  printf("Los numeros pares son: %d\n",pares);
  printf("Los numeros impares son: %d\n",impares);

  return 0;
}
