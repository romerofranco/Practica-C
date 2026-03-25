// Estructura de de datos Tipo Vector

//De esta forma se recorre un array |

/*
#include <stdio.h>

int main()
{

  int numeros [5] = {10,20,30,40,50};
  int i = 0;

  for(i=0; i<5; i++){
  printf("numeros[%d]= %d\n",i,numeros[i]);
  }


    return 0;
}*/

/*Se desea guardar los sueldos de 5 operarios
#include<stdio.h>
int main(){
  int i=0;
  int sueldos [5];

  //Cargamos el vector

  for(i=0; i < 5 ; i++){
  printf("Ingrese el %d sueldo: ",i+1);
  scanf("%d",&sueldos[i]);
  }
  // Imprimimos los sueldos
  for(i=0; i < 5 ; i++){
  printf("Los sueldos ingresados son: %d\n",sueldos[i]);

  }*/

/*Definir un vector de 5 componentes de tipo float que representen las alturas de 5 personas
#include<stdio.h>
int main(){

  int i;
  float alturas[5];

  //cargamos el vector
  for(i=0; i<5; i++){
  printf("Cargue las alturas de la persona %d: ",i+1);
  scanf("%f",&alturas[i]);

}
  //Imprimimos las alturas

  for(i=0; i<5; i++){
  printf("Las alturas dadas fueron %.2f\n",alturas[i]);
  }
  return 0;
}*/

/*Una empresa tiene dos turnos maniana y tarde en los que trabajan 8 empleados 4 por la maniana y 4 por la tarde. Confeccionar
 * un programa que permita almacenar los sueldos de los empleados agrupados por turno, definir los vectores con componentes tipo
 * float. Imprimir los gastos en sueldos de cada turno

#include<stdio.h>
int main(){

  float tManana [4];
  float tTarde [4];
  float sumaSueldoM = 0;
  float sumaSueldoT = 0;
  int i;

  for(i=0; i<4; i++){
  printf("Ingrese el sueldo de los empleados de la manana %d: ",i+1);
  scanf("%f",&tManana[i]);
  }

  for(i=0; i<4; i++){
  printf("Ingrese el sueldo de los empleados de la tarde %d: ",i+1);
  scanf("%f",&tTarde[i]);
  }

  for(i=0; i<4;i++){
  sumaSueldoM = sumaSueldoM + tManana[i];
  sumaSueldoT = sumaSueldoT + tTarde[i];
  }

  printf("La suma de los sueldo a la mananan es: %.2f\n",sumaSueldoM);
  printf("La suma de los sueldo a la tarde es: %.2f\n",sumaSueldoT);

  return 0;
}*/

/*Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
 * -> A: El valor acumulado de todos los elementos del vector.
 * -> B: El valor acumulado de los elementos del vector que sean mayores a 36
 * -> C: Cantidad de valores mayores a 50.


#include<stdio.h>
int main(){

  int numeros[8];
  int mayores36 = 0;
  int mayores50 = 0;
  int i = 0;
  int valorAcumulado =0;

  for(i=0; i<8; i++){
  printf("Ingrese los valores del vector %d: ",i+1);
  scanf("%d",&numeros[i]);
  }

  for(i=0; i<8; i++){
  valorAcumulado=valorAcumulado + numeros[i];
  }

  for(i=0; i<8; i++){
    if(numeros[i] > 36){
    mayores36++;
  }
  if(numeros[i]>50){
    mayores50++;
  }
  }

  printf("El valor acumulado en el vector:%d\n",valorAcumulado);
  printf("Los numeros mayores a 36 son: %d\n",mayores36);
  printf("Los valores mayores a 50 son: %d\n",mayores50);

}*/

/*Realizar un programa que pida la carga de dos vectores numericos enteros de 4 elementos. Obtener la suma de los dos vectores, dicho
 * resultado guardarlo en un tercer vector del mismo tamanio. Sumar Componente a componente

#include<stdio.h>
int main (){

  int vec0[4];
  int vec1[4];
  int vec2[4];
  int i = 0;

  for(i=0; i<4 ; i++){
  printf("Cargue el primer vector: ");
  scanf("%d",&vec0[i]);
  }

  for(i=0; i<4 ; i++){
  printf("Cargue el segundo vector: ");
  scanf("%d",&vec1[i]);
  }


  for(i=0; i<4; i++){
  vec2[i]=vec0[i]+vec1[i];
  }

  printf("Vector resultante.\n");

  for(i=0; i<4; i++){
  printf("%d\n",vec2[i]);
  }
  return 0;
}*/

/*Se tienen las notas del primer parcial de los alumnos de dos cursos,el curso A y el curso B, cada curso cuenta con 5 alumnos.
 * Realizar un programa que muestre el curso que obtuvo el mayor promedio general
#include<stdio.h>
int main(){
  int cursoA [5];
  int cursoB [5];
  int i = 0;
  int sumaA = 0;
  int sumaB =0;
  int promA = 0;
  int promB = 0;

  for(i=0; i<5; i++){
  printf("Cargue las notas del curso A: ");
  scanf("%d",&cursoA[i]);
  }

  for(i=0; i<5; i++){
  printf("Cargue las notas del curso B: ");
  scanf("%d",&cursoB[i]);
  }

  for(i=0; i<5 ; i++){
  sumaA = sumaA + cursoA[i];
  sumaB = sumaB + cursoB[i];
  }

  for(i=0; i<5 ; i++){
  promA = sumaA / 5;
  promB = sumaB / 5;
  }

  if(promA>promB){
  printf("El promedio del curso A es mayor que el curso B,es -> %d.\n",promA);
  }else{
  printf("El promedio del curso B es mayor que el curso A. es ->%d.\n",promB);
  }

  printf("El promedio del curso A:%d\n",promA);
  printf("El promedio del curso B:%d \n",promB);


  return 0;
}*/

/*Cargar un vector de 10 elementos y verificar posteriormente si el mismo esta ordenando de menor a mayor
#include<stdio.h>
int main(){

  int vec[10];
  int i ;
  int orden = 0;

  for(i=0; i<10 ; i++){
  printf("Ingrese el numero: ");
  scanf("%i",&vec[i]);
  }

  orden=1;
  for(i=0; i<9; i++)
{
    if (vec[i+1] <  vec[i])
  {
    orden=0;
  }

}
    if(orden==1)
  {
    printf("Esta ordenado de menor a mayor\n");
  }else{
    printf("No esta ordenado de menor a mayor");
  }
  return 0;
}*/

/* Ejercicio 2 -> Cargar 6 numeros enteros en un vector e imprimirlos en orden inverso al que fueron ingresados
#include<stdio.h>
int main(){

  int numeros[6];
  int i=0;

  //Ingreso de Numeros
  for(i=0; i < 6; i++){
  printf("Ingrese los 6 numeros, Ingrese el numero %d: ",i+1);
  scanf("%d",&numeros[i]);
}

  //Imprimir los numeros

for(i=5; i >= 0 ; i--){
  printf("%d \n", numeros[i]);
}*/

/*Cargar 8 numeros enteros en un vector. Mostrar la suma total, el promedio, el mayor y el menor
#include<stdio.h>
int main(){

  int num[8];
  int suma = 0;
  int promedio = 0;
  int mayor = 0 ;
  int menor = 0;
  int i = 0;

//Cargamos los Numeros
for(i=0;i<8;i++){
printf("Ingrese los numeros %d:",i+1);
scanf("%d",&num[i]);
}

//Sumamos los Numeros
for(i=0;i<8;i++){
suma = suma + num[i];
}

//Hacemos el promedio
promedio= suma/8;

//Mayor y Menor
/* ! Explicacion para hacer el mayor y el menor
  -> Declaramos las variables arrancando con el primer elemento del vector
  -> Luego, dentro de un for vamos comparando cada elemento

  ¿Por qué arrancamos con num[0]?
    -> Por si el mayor y el menor son el primer elemento de la fila. A medida que recorres el vector, si encontramos uno mas grande
       actualizas el mayor, si encontras uno mas chico actualizas el menor.


  mayor = num[0];
  menor = num[0];


/* ¿Por qué el FOR arranca en i = 1?
    -> Porque num[0] ya lo usamos para inicializar, no tiene sentido compararlo consigo mismo.

for(i=1; i < 8; i++){

  if(num[i]> mayor){
    mayor = num[i];
  }

  if(num[i] < menor){
    menor = num[i];

  }

}

printf("La suma de los numeros ingresados es:%d\n",suma);
printf("El promedio de los numeros ingresados es:%d\n",promedio);
printf("El numero mayor ingresado es: %d\n",mayor);
printf("El numero menor ingresado es: %d\n",menor);

  return 0;
}*/

/*Cargar 10 numeros enteros en un vector. Contar cuantos son pares y cuantos son impares
#include<stdio.h>
int main(){

  int num[10];
  int i = 0;
  int pares = 0;
  int impares = 0;

  //hacemos la carga de los vectores
for(i=0; i<10; i++){
  printf("Ingrese los numeros- %d: ",i+1);
  scanf("%d",&num[i]);
}

//Hacemos la cuenta de los impares y pares
for(i=0;i<10;i++){
  if(num[i] %2 == 0){
  pares++;
  }else{
  impares++;
  }
}

  printf("Los numeros que son pares son: %d\n",pares);
  printf("Los numeros que son impares son: %d\n",impares);

return 0;

}*/

/*Cargar 6 numeros enteros en un vector. Mostrar cuantos de ellos son positivos, cuantos negativos y cuantos 0.
#include<stdio.h>
int main(){

  int num[6];
  int i = 0;
  int negativos = 0;
  int positivos = 0;
  int cero = 0;

  for(i=0; i<6;i++){
  printf("Ingrese los numeros-> %d: ",i+1);
  scanf("%d",&num[i]);
}
  for(i=0; i<6;i++){

  if(num[i]>0){
  positivos++;
  }else if(num[i]<0){
  negativos++;
  }else{
  cero++;
  }

  }
  printf("De los numeros ingresados son positivos %d, Negativos %d y Cero %d.\n",positivos,negativos,cero);
  return 0;
}*/

//***********************************

/*Cargar 5 numeros enteros en un vector y ordenarlos de menor a mayor usando bubble sort. Mostrar el vector antes y despues de ordenar
#include<stdio.h>
int main(){

  int num[5];
  int i=0;
  int aux = 0;
  int j = 0;


  for(i=0; i<5 ; i++){
  printf("Ingrese los numeros correspondientes %d: ",i+1);
  scanf("%d",&num[i]);
}

for(i=0;i<5;i++){
  printf("Aqui esta el Array sin ordenar : \n[%d]",num[i]);
}

  // luego tenemos que hacer un ciclo externo que recorra las veces el tamanio del array

  for(i=0;i<5;i++){ //Vuelta exterior: 5 rondas del supervisor

    for(j=0;j<4;j++){ //Vuelta interior: Inspector compara vecinos

    //Vuelta 1 -> 4 > 2  intercambia, 4>7 no, 7>1 intercambia , 7>5 intercambia -> [2,4,1,5,7]
    //Vuelta 2 -> 2 > 4 no, 4 > 1 intercambia, 4 > 5 no, 5 > 7 no -> [2,1,4,5,7]
    //Vuelta 3 -> 2 > 1 intercambia, 2 > 4 no , 4 > 5 no, 5 > 7 no -> [1,2,4,5,7]
    //Vuelta 4 -> Sin intercambios.
    //Vuelta 5 -> Sin intercambios.

      if(num[j]>num[j+1]){ // Si (el de la izquierda es mayor al de la derecha){}
        aux = num[j];     //Guarda el valor en la variable auxiliar
        num[j] = num[j+1];// Ponemos el menor en la izquierda
        num[j+1] = aux;   //Pongo el mayor en la derecha
    }

}

}

  //Resultado Final
  for(i=0; i < 5 ; i++){
  printf("Aqui esta el Array ordenado: \n [%d] ",num[i]);
  }

return 0;

}*/

/*Cargar 5 numeros enteros en un vector y ordenarlos de mayor a menor usando bubble sort.*/

#include<stdio.h>
int main(){

  int v[5];     // -> Vector de los 5 numeros
  int aux = 0;  // -> Variables auxiliar para almacenamiento
  int i= 0;     //-> Variable para el for Exterior (Supervisor)
  int j = 0;    //-> Variable para el for interior (Inspector)

  //For de Ingreso de numeros
  for(i=0; i<5; i++){
  printf("Ingrese los numeros para la comparacion: ");
  scanf("%d",&v[i]);
  }

  //For Exterior
  for(i=0; i < 5 ; i++){

    //For interior
    for(j=0; j < 5 ; j++){

      if(v[j+1]>v[j]){
        aux = v[j+1];
        v[j+1]= v[j];
        v[j] = aux;
  }

      }

  }
  for(i=0; i<5; i++){
  printf("Aqui esta el Array Ordenado: [%d]\n",v[i]);
  }
  return 0;
}
