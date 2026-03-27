/*Definir tres variables de tipo char y cargar dos por asignación y la tercera por teclado. Imprimir los valores de las mismas.
#include<stdio.h>
int main(){


  char letra1 = 62;
  char letra2 = 'A';
  char letra3;

  printf("Ingrese un caracter: ");
  scanf(" %c",&letra3);

  printf("%c\n",letra1);
  printf("%c\n",letra2);
  printf("%c\n",letra3);

  return 0;
}*/

/*Confeccionar un programa que permita la carga de valores enteros por teclado.
 *  Luego de ingresar el valor mostrar un mensaje por pantalla que pida confirmar al usuario si desea cargar otro valor ingresando los caracteres 's' o 'n'.
 *  Mostrar al final la suma de los valores ingresados.

#include<stdio.h>
int main(){

  int num = 0;
  int suma = 0;
  char continuar;

  do{
      printf("Ingrese un valor: ");
      scanf("%d",&num);

  if(num == 0){
    printf("Usted ingreso 0, el programa finalizara.\n");
    break;
  }

      suma = suma + num;

    printf("Si desea ingresar otro valor ingrese la letra: 's' .Para salir: 'n' :");
    scanf(" %c",&continuar);

}while(continuar != 'n' && continuar != 'N');

printf("La suma de los numeros ingresados es: %d\n",suma);

}*/

/*Mostrar el abecedario de la 'A' a la 'Z' primero en minusculas y luego en mayusculas. Utilizar una variable de tipo char dentro de un for.

#include<stdio.h>
int main(){

  char letra;


  for(letra='a'; letra <= 'z'; letra++)
{
  printf("%c-",letra);
}
  printf("\n\n");

  for(letra='A'; letra <= 'Z' ; letra++){
  printf("%c-",letra);
}

return 0;
}*/

/*Confeccionar un programa que solicite la carga de dos valores enteros por teclado. Luego solicitar que se cargue alguno de los caracteres: '+','-','*' o '/'.
 * Segun el caracter ingresado proceder a mostrar la suma, resta , multiplicacion o division de los valores ingresados.
#include<stdio.h>
int main(){

  int num1 = 0;
  int num2 = 0;
  char operador;
  int suma,resta = 0;
  int mul,div = 0;

do{
  printf("Ingrese el operador para sus numeros, 0 para salir: ");
  scanf(" %c",&operador);

  if(operador == '+'){
  printf("Ingrese el primer numero para la suma: ");
  scanf("%d",&num1);
  printf("Ingrese el segundo numero para la suma: ");
  scanf("%d",&num2);

  suma = num1 + num2;

  printf("La suma de los numeros ingresados es: %d\n",suma);

  }else if(operador == '-'){
  printf("Ingrese el primer numero para la resta: ");
  scanf("%d",&num1);
  printf("Ingrese el segundo numero para la resta: ");
  scanf("%d",&num2);

  resta = num1 - num2;

  printf("La resta de los numeros ingresados es: %d\n",resta);

  }else if(operador == '*'){
  printf("Ingrese el primer numero para la multiplicacion: ");
  scanf("%d",&num1);
  printf("Ingrese el segundo numero para la multiplicacion: ");
  scanf("%d",&num2);

  mul = num1 * num2;

  printf("La multiplicacion de los numeros ingresados es: %d\n",mul);
  }else if(operador == '/'){
  printf("Ingrese el primer numero para la division: ");
  scanf("%d",&num1);
  printf("Ingrese el segundo numero para la division: ");
  scanf("%d",&num2);

  div =(float) num1 / num2;

  printf("La division  de los numeros ingresados es: %d\n",div);

}

}while(operador != '0');

printf("\nMuchas gracias por usar nuestro Programa. El programa finalizo.");

  return 0;
}*/

/*Realizar un programa que solicite la carga de la edad y sexo de dos personas. Luego mostrar la edad y sexo de la persona mayor.
 * Para almacenar el sexo definir variables del tipo char donde se almacenara el caracter ‘m’ o ‘f’ indicando si es del sexo masculino o femenino.
#include<stdio.h>
int main(){

  int age1 = 0;
  char sex1;
  int age2 = 0;
  char sex2;

  printf("Ingrese la edad de la primera persona: ");
  scanf("%d",&age1);
  printf("Ingrese el sexo de la primera persona: ");
  scanf(" %c",&sex1);
  printf("Ingrese la edad de la segunda persona: ");
  scanf("%d",&age2);
  printf("Ingrese el sexo de la segunda persona: ");
  scanf(" %c",&sex2);

  if(age1 > age2){
  printf("La edad de la primera persona es mayor: %d anios y el sexo es: %c",age1,sex1);
  }else{
  printf("La edad de la segunda persona es mayor: %d anios y el sexo es: %c",age2,sex2);
  }

return 0;
}*/

/*Realizar la carga de valores enteros por teclado y sumarlos.
 * Cada vez que se carga un valor pedir al operador que ingrese si quiere cargar otro valor ingresando una 's' o 'S' */
#include<stdio.h>
int main(){

  int num = 0;
  char operador;
  int suma = 0;

  do{
      printf("Ingrese el numero a sumar, 0 para finalizar: ");
      scanf("%d",&num);

    if(num == 0){printf("Ingreso 0, el programa finalizara.\n"); break;}

    suma = suma + num;

    printf("Desea cargar otro valor? presione s o S: ");
    scanf(" %c",&operador);

}while(operador == 's' && 'S');

  printf("El resultado de los numeros dados es:%d",suma);
  return 0;
}
