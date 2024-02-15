/*
Este programa pede ao usuario um numero qualquer e depois exibe o numero na tela
*/
#include <stdio.h> // Estamos importando uma biblioteca para trabalhar com entrada e saida de dados

int main(){
    int idade; // Declaração da variavel idade do tipo inteiro
    printf("Digite sua idade e tecle enter\n");
    scanf("%d",&idade); // Para pegar o numero digitado pelo usuario
                        // Estamos usando o comando scanf e adicionando
                        // O valor digitado ao endereço da memoria
                        // Da variavel idade. Usamos o e-comercial para
                        // Referenciar o endereço da memoria da varieavel
                        // Idade
    printf("A idade digitada é %d\n endereço da variavel idade %x \n",idade, &idade);
    return 0;
}