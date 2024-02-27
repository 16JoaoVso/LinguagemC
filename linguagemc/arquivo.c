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
}