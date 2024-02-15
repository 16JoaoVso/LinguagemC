# Estudo da Linguagem C
## Neste repositório sera publicado arquivos escritos em C

<div style="text-aling:center">
<img src="https://giovanidacruz.com.br/wp-content/uploads/2022/11/C-programming-1024x530-1.jpg" height="200">
</div>

### Abaixo é apresentado os arquivos deste repositório

#### hello.c

```C
#include <stdio.h>
int main(){
    printf("Hello,World\n");
    return 0
```

#### primeiro.c

```C
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
```

#### operacoes.c

```C
#include<stdio.h>
 
int main(){
    int n1;
    int n2;
    int soma;
    int subtrair;
    int multiplicar;
    int dividir;
 
    printf("Digite um numero e tecle enter: \n");
    scanf("%d", &n1);
 
     printf("Digite um numero e tecle enter: \n");
    scanf("%d", &n2);
 
    soma = n1 + n2;
    subtrair = n1 - n2;
    multiplicar = n1 * n2;
    dividir = n1 / n2;
 
    printf("O resultado da soma é %d",soma);
    printf("O resultado da subtrair é %d",subtrair);
    printf("O resultado da multiplicar é %d",multiplicar);
    printf("O resultado da dividir é %d",dividir);
    return 0;
}
```

#### desconto.c

```C
#include <stdio.h>
 
int main() {
  int n1, n2, n3, n4;
  float valor;
 
  printf("Digite a primeira nota e aperte enter");
  scanf("%d", &n1 );
 
  printf("Digite a segunda nota e aperte enter");
  scanf("%d", &n2  );
 
  printf("Digite a terceira nota e aperte enter");
  scanf("%d", &n3 );
 
  printf("Digite a quarta nota e aperte enter");
  scanf("%d", &n4 );
 
 
  valor = (n1 + n2 + n3 + n4) / 4;
 
  printf("A média das notas é %.2f.\n",valor);
 
  return 0;
}
```