#include<stdio.h>

int main(){
    int base, expo;
    int rs = 1;

     printf("Digite a base: \n");
     scanf("%d" ,&base);

     printf("Digite o expoente: \n");
     scanf("%d" ,&expo);

     for( int i = 1 ; i <= expo ; i++ ){
        rs *= base;
     }

     printf("O resultado da potência é %d \n" ,rs);
return 0;
}