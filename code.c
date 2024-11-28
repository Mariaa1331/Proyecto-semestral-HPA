#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Elabore un programa que le permita llevar a un banco el control
de las transacciones (depósito y retiro) de sus clientes, es importante
 indicar que el banco cuenta con una cartera de 50 clientes y cada cliente 
 puede realizar 10 transacciones al día (debe almacenar toda la información en una matriz).
  El usuario los depósitos los almacena con números positivos y los retiros con números negativos.
   En otro arreglo se tiene el monto total de la cuenta y en otro arreglo en nombre del cliente.
   
El programa debe mostrar la siguiente información: 
Monto total de depósitos realizados en el banco
Monto total de retiros realizados en el banco
Balance actual de la cuenta de cada cliente al finalizar el día*/
    float transac[10][50], total[50];
    int i, j, retiro=0, depo=0;
    char nombres[50];
    
