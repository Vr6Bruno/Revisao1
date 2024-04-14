/*Como fazer um contador em porcentagem?
Contador não para ao digitar 10 salarios!*/

#include <stdio.h>
#include <stdlib.h>
#define SM 880.05

int main(void) {
  float salario;
  int contador, quantidade1 = 0, quantidade2 = 0, quantidade3 = 0, opcao;
  do {
    printf("Escolha 1 para avancar ou 0 para sair: \n");
    scanf("%i", &opcao);
    if(opcao == 1){
      for (contador = 0; contador <= 10; contador++) {
        do {
          printf("Salario do funcionario é: \n");
          scanf("%f", &salario);
          if (salario >= SM) {
            if (salario >= 15 * SM) {
              quantidade1++;
              printf("Cliente pertencente ao grupo A: %i\n", quantidade1);
            } else if (salario < 15 * SM && salario >= 5 * SM) {
              quantidade2++;
              printf("Cliente pertencente ao grupo B: %i\n", quantidade2);
            } else {
              quantidade3++;
              printf("Cliente pertencente ao grupo C: %i\n", quantidade3);
            }
          } else {
            printf("Salario incorreto!!!\n");
          }

        } while (salario > SM);
      }
    }else if(opcao == 0){
      printf("programa encerrado!");
    } else{
      printf("Valor incorreto, 0 ou 1 apenas!\n");
    }
    
  } while (opcao != 0);

      return 0;
}