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
}
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

#### parimpar.c

```C
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
```

#### Desvio de fluxo: media_aluno.c
```C
/*
Neste programa iremos calcular a nota média do aluno. Teremos a entrada de 4 notas, depois será feito o cálculo da média onde iremos somar as notas e depois dividr por 4.
Se  aluno tiver uma média acima ou igual a 7, então estará aprovado; caso o aluno tenha uma nota menor ou igual a 4 então o aluno estará reprovado; caso contrário, estará em recuperação
*/
#include <stdio.h>

 int main(){
    float n1,n2,n3,n4,md;
    printf("Digite a primeira nota: \n");
    scanf ("%f" ,&n1);

    printf("Digite a segunda nota: \n");
    scanf ("%f" ,&n2);

    printf("Digite a terceira nota: \n");
    scanf ("%f" ,&n3);
    
    printf("Digite a quarta nota: \n");
    scanf ("%f" ,&n4);

    md = (n1+n2+n3+n4) / 4;

    printf("A nota média do aluno é %2.2f \n" ,md);

    if (md >= 7 ){
        printf("Aprovado \n");
    }
    else if (md <= 4 ){
        printf("Reprovado \n");
    }
    else{
        printf("Recuperação \n");
    }
    
 }
```

#### Bissexto.c

```C
#include <stdio.h>

int main(){
 int num;
 printf( "Digite o ano: \n");
 scanf("%d",&num);
 
 if(num % 4 == 0){
    printf("Este ano é bissexto \n");
 
 }
 else{
    printf("Este ano não é bissexto \n");
 }
 return 0;
}

```

#### while.c

```C
#include <stdio.h>

int main(){
    int i = 0;
    while (i <= 10){
     printf ("%d \n" ,i);
     i++;
    }
    return 0;

}
```
#### while_bissexto.c

```C
#include <stdio.h>

int main(){
    int ano = 1950;
    int qtd = 0;

    while( ano <= 2024){
        if ( ano % 4 == 0){
            printf("O ano %d é bissexto\n" ,ano);
            qtd++;
        }
        ano++;
    }
    printf("Temos %d anos bissesxtos \n" ,qtd);
    return 0;
}
```

#### while_dec_bin.c

```C
#include <stdio.h>

int main(){
    int dec = 24;
    int resto = 0;
    int pos = 1;
    int rs = 0;
    while ( dec > 0 ){
        resto = dec % 2;
        dec = dec / 2;
        rs = rs + pos * resto;
        pos = pos * 10;
    }
    printf("%d\n" ,rs);
    return 0;
}
```

#### while_bin_dec

```C
#include<stdio.h>
#include<math.h>

int main(){

    int binario [6]={1,0,1,1,1,0};
    int rs = 0;
    int pos =0;
    int exp = 5;
    while ( pos <= 5){
        rs += binario[pos] * ( pow( 2 , exp));
        pos++;
        exp--;
    }
    printf ("%d\n" ,rs);
    return 0;
}
```

#### for1.c

```C
#include<stdio.h>

int main(){
    int x;
    for(x = 1; x <= 10 ; x++){
        printf("%d\n" ,x);
    }
    return 0;
}
```

#### tabuada.c

```C
#include<stdio.h>

int main(){
    int num, num2;
    printf("Digite um número paraa tabuada: \n");
    scanf("%d" ,&num);
    for(num2 = 1 ; num2 <= 10 ; num2++){
        printf("%d x %d = %d\n" ,num, num2, (num*num2));
    }
    return 0;
}
```

#### base_expoente.c

```C
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
```

#### colecao1.c

```C
// Array é um conjuntp de dados sobre um determinado assunto.
// Podemos falar de valores numéricos, textos, datas ou objetos.

#include<stdio.h>

int main(){
    int valores[5] = {10,5,8,12,7};
    printf("%d\n" ,valores[3]);

    return 0;
}
```

#### colecao2.c

```C
#include<stdio.h>

int main(){
    int loud[10] = {1,21,11,8,19,45,7,24,26,18};
    int soma=0, media=0, i;
    for( i=0 ; i <= 9 ; i++){
        soma += loud[i];
    }
    printf("O resultado da soma é %d\n" ,soma);

    for( i = 0 ; i < 10 ; i++){
        media += loud[i];
    }
    printf("O resultado da média é %d\n" ,(media/10));
    for( i= 0 ; i < 10 ; i++){
        if( loud[i] % 2 == 0){
            printf("%d\n" ,loud[i]);
        }
    }
    return 0;
}
```

####  colecao_iguai.c

```C
#include <stdio.h>
 
int main() {
    int c1 [10] = {10, 5, 68, 8, 47, 12, 54, 13, 62, 21};
    int c2 [15] = {11, 5, 62, 112, 84, 76, 12, 55, 59, 85, 13, 0, 14, 21, 18};
 
    int i, j;
 
    printf("Números iguais das coleções:\n");
 
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 15; j++) {
            if (c1[i] == c2[j]) {
                printf("%d ", c1[i]);
            }
        }
    }
 
    printf("\n");
 
    return 0;
}
```

#### arr_s_ptr1.c

```C
#include <stdio.h>

int main(){
    int valores[5] = {1,2,3,4,5};
    printf("Exibindo o primeiro valor: %d\n" ,valores[0]);
    printf("Exibindo o segundo valor: %d\n" ,valores[1]);
    int i;
    for( i = 0; i < 5; i++){
        printf("Exibindo: %d\n" ,valores[i]);
    }
    return 0;
}
```

#### arr_c_ptr1.c

```C
#include <stdio.h>

int main(){
    int valores[5] = {1,2,3,4,5};
    int *ptr_valores = valores;

    // printf("%d\n" ,*ptr_valores);
    // printf("%p\n" ,ptr_valores);

    // ptr_valores++;

    // printf("%d\n" ,*ptr_valores);
    // printf("%p\n" ,ptr_valores);
    int i;
    for( i = 1 ; i <= 5 ; i++){
        printf("O valor é %d e a posição de memória é %p\n" ,*ptr_valores,ptr_valores);
        ptr_valores++;
    }
    
    return 0;
}
```

#### pass_por_valor.c

```C
#include <stdio.h>
 
 int subtrair(int x, int y){
printf("A Posição de x é %p e y é %p\n" ,&x,&y);
    return x - y;
}

int main(){
    int v1 = 10;
    int v2 = 5;
    printf("A Posição de v1 é %p e v2 é %p\n" ,&v1,&v2);
    int rs = subtrair(v1,v2);
    printf("O resultado é %d\n" ,rs);
    return 0;
}
```

#### pass_por_ref.c

```C
#include <stdio.h>
 
 int subtrair(int *x, int *y){
    printf("Posição de x %p e Posição de y %p" ,x,y);
    return *x - *y;
}

int main(){
    int v1 = 10;
    int v2 = 5;
    printf("Posição de v1 %p e Posição de v2 %p" ,&v1,&v2);
    int rs = subtrair(&v1, &v2);
    printf("O resultado %d\n" ,rs);
    return 0;
}
```

#### malloc.c

```C
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr_int;
    ptr_int = (int *)malloc(sizeof(int));

    printf("Endereço reservado %p\n" , ptr_int);

    if(ptr_int==NULL){
        printf("Erro ao tentar alocar a memória\n");
        return 1;//para a execução do programa
    }
    printf("Digite um número: \n");
    scanf("%d" ,ptr_int);

    printf("O valor digitado é %d e ele está em %p\n" ,*ptr_int,ptr_int);
    free(ptr_int);
    return 0;
}
```

#### maloc2.c

```C
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *array;
    int tamanho = 5;

    array = (int *)malloc (tamanho * sizeof(int));

    if (array=NULL){
    printf("Erro na alocação de memória\n");
    return 1;
    }
    for(int i = 0 ; i < tamanho ; i++){
        array[i] = i + 1;
    }
    printf("Exibindo os dados do array\n");
    for(int j = 0 ; j < tamanho ; j++){
        printf("%d - " ,array[j]);
    }
    free(array);
    return 0;
}
```

#### arquivo.c

```C
#include <stdio.h>

int main(){
    FILE *arquivo;
    char texto[100];

    // Abre o arquivo para escrita
        arquivo = fopen("cortinas.txt", "w");

        if (arquivo == NULL){
            printf("Erro ao abrir o arquivo.\n");
            return 1;
        }

    // Escreve no arquivo
    fprintf(arquivo, "VAAAAAAAAAAAAAAAAAAAAAI CORINTHIAAAAAAAAAAAAAAANS !!!!!!");

    // Fecha o arquivo
    fclose(arquivo);

    // Abre o arquivo para leitura
    arquivo = fopen("cortinas.txt", "r");
      if (arquivo == NULL){
            printf("Erro ao abrir o arquivo.\n");
            return 1;
      }
      
      // Lê o conteúdo do arquivo e imprime na tela 
      fgets(texto, 100, arquivo);
      printf("Conteúdo do arquivo: %s\n", texto);

      fclose(arquivo);

      return 0;
}```