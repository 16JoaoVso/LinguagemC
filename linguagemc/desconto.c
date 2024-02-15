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