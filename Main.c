
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int opcaoMenu, valor;
  opcaoMenu = valor = 0;

  printf("Bem vindo!\n");
  while (1)
  {
    printf("\nMenu\n");
    printf("\t1 - Escrever um numero por extenso.\n");
    printf("\t2 - Imprimir todos os numeros do arquivo em tela.\n");
    printf("\t3 - Sair\n");
    printf("OPCAO: ");
    scanf("%d", &opcaoMenu);

    switch (opcaoMenu)
    {
    case 1:
      do
      {
        printf("\nDigite o valor valor que deseja imprimir por extenso.\n");
        printf("O valor dever estar no intervalo de 0 a 9999.99\n");
        printf("VALOR: ");
        scanf("%d", &valor);
      } while (valor > 0 && valor < 9999.99);
      break;
    case 2:
      break;
    case 3:
      printf("\nPrograma finalizado pelo usuario.\n");
      exit(0);
    default:
      printf("\nDigite uma opcao valida.\n");
      break;
    }
  }

  system("pause");
  return 0;
}