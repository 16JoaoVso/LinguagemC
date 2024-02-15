#include <stdio.h>
 
int main(){
 int num;
 printf( "Digite um numero: \n");
 scanf("%d",&num);
 
 if(num % 2 == 0){
    printf("Este numero é par \n");
 
 }
 else{
    printf("Este numero é impar \n");
 }
 return 0;
}