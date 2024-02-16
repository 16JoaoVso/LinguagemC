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