
#include <stdio.h>
#include <stdlib.h>

char *concatenar(char *inicial, char *adicionar)
{
  int len1 = 0, len2 = 0;
  char *extensoConcatenado;
  while (inicial[len1] != '\0')
  {
    len1++;
  }
  while (adicionar[len2] != '\0')
  {
    len2++;
  }
  int totalLen = len1 + len2;
  extensoConcatenado = (char *)malloc(totalLen * sizeof(char));
  int i, j;
  for (i = 0; i < len1; i++)
  {
    extensoConcatenado[i] = inicial[i];
  }
  for (j = 0; j < len2; j++)
  {
    extensoConcatenado[i + j] = adicionar[j];
  }
  extensoConcatenado[totalLen] = '\0';
  return extensoConcatenado;
}

void transformaExtenso(float valor, FILE *arquivo)
{
  float numero = valor;
  char *extenso;
  char inicial[] = "";
  // Separar milhar, centena, dezena, unidade e casas decimais
  int milhar, centena, dezena, unidade;
  float casasDecimais;

  // Obtendo a parte inteira do número
  int parteInteira = (int)numero;

  // Obtendo a parte decimal do número
  casasDecimais = numero - parteInteira;

  // Separando os dígitos
  milhar = parteInteira / 1000;
  parteInteira %= 1000;
  centena = parteInteira / 100;
  parteInteira %= 100;
  dezena = parteInteira / 10;
  unidade = parteInteira % 10;

  // Exibir resultado
  printf("Número: %.2f\n", numero);
  printf("Milhar: %d\n", milhar);
  printf("Centena: %d\n", centena);
  printf("Dezena: %d\n", dezena);
  printf("Unidade: %d\n", unidade);
  printf("Casas Decimais: %.2f\n", casasDecimais);

  extenso = concatenar(inicial, "");

  switch (milhar)
  {
  case 1:
    printf("Um mil ");
    extenso = concatenar(extenso, "Um mil ");
    break;
  case 2:
    printf("Dois mil ");
    extenso = concatenar(extenso, "Dois mil ");
    break;
  case 3:
    printf("Três mil ");
    extenso = concatenar(extenso, "Três mil ");
    break;
  case 4:
    printf("Quatro mil ");
    extenso = concatenar(extenso, "Quatro mil ");
    break;
  case 5:
    printf("Cinco mil ");
    extenso = concatenar(extenso, "Cinco mil ");
    break;
  case 6:
    printf("Seis mil ");
    extenso = concatenar(extenso, "Seis mil ");
    break;
  case 7:
    printf("Sete mil ");
    extenso = concatenar(extenso, "Sete mil ");
    break;
  case 8:
    printf("Oito mil ");
    extenso = concatenar(extenso, "Oito mil ");
    break;
  case 9:
    printf("Nove mil ");
    extenso = concatenar(extenso, "Nove mil ");
    break;
  default:
    break;
  }

  switch (centena)
  {
  case 1:
    printf("cem ");
    extenso = concatenar(extenso, "cento ");
    break;
  case 2:
    printf("duzentos ");
    extenso = concatenar(extenso, "duzentos ");
    break;
  case 3:
    printf("trezentos ");
    extenso = concatenar(extenso, "trezentos ");
    break;
  case 4:
    printf("quatrocentos ");
    extenso = concatenar(extenso, "quatrocentos ");
    break;
  case 5:
    printf("quinhentos ");
    extenso = concatenar(extenso, "quinhentos ");
    break;
  case 6:
    printf("seiscentos ");
    extenso = concatenar(extenso, "seiscentos ");
    break;
  case 7:
    printf("setecentos");
    extenso = concatenar(extenso, "setecentos ");
    break;
  case 8:
    printf("oitocentos ");
    extenso = concatenar(extenso, "oitocentos ");
    break;
  case 9:
    printf("novecentos ");
    extenso = concatenar(extenso, "novecentos ");
    break;
  default:
    break;
  }

  if (dezena != 0 || unidade != 0)
  {
    printf("e ");
    extenso = concatenar(extenso, "e ");
  }

  switch (dezena)
  {
  case 1:
    if (unidade == 0)
    {
      printf("dez ");
      extenso = concatenar(extenso, "dez ");
    }
    break;
  case 2:
    printf("vinte ");
    extenso = concatenar(extenso, "vinte ");
    break;
  case 3:
    printf("trinta ");
    extenso = concatenar(extenso, "trinta ");
    break;
  case 4:
    printf("quarenta ");
    extenso = concatenar(extenso, "quarenta ");
    break;
  case 5:
    printf("cinquenta ");
    extenso = concatenar(extenso, "cinquenta ");
    break;
  case 6:
    printf("sessenta ");
    extenso = concatenar(extenso, "sessenta ");
    break;
  case 7:
    printf("setenta ");
    extenso = concatenar(extenso, "setenta ");
    break;
  case 8:
    printf("oitenta ");
    extenso = concatenar(extenso, "oitenta ");
    break;
  case 9:
    printf("noventa ");
    extenso = concatenar(extenso, "noventa ");
    break;
  default:
    break;
  }

  if (dezena != 1 && unidade != 0)
  {
    printf("e ");
    extenso = concatenar(extenso, "e ");
  }

  switch (unidade)
  {
  case 1:
    printf("um ");
    extenso = concatenar(extenso, "um ");
    break;
  case 2:
    printf("dois ");
    extenso = concatenar(extenso, "dois ");
    break;
  case 3:
    printf("três ");
    extenso = concatenar(extenso, "três ");
    break;
  case 4:
    printf("quatro ");
    extenso = concatenar(extenso, "quatro ");
    break;
  case 5:
    printf("cinco ");
    extenso = concatenar(extenso, "cinco ");
    break;
  case 6:
    printf("seis ");
    extenso = concatenar(extenso, "seis ");
    break;
  case 7:
    printf("sete ");
    extenso = concatenar(extenso, "sete ");
    break;
  case 8:
    printf("oito ");
    extenso = concatenar(extenso, "oito ");
    break;
  case 9:
    printf("nove ");
    extenso = concatenar(extenso, "nove ");
    break;
  default:
    break;
  }

  extenso = concatenar(extenso, "reais ");
  extenso = concatenar(extenso, ";\n");
  fputs(extenso, arquivo);
  free(extenso);
}

int main()
{
  int opcaoMenu = 0;
  float valor = 0.0;

  const float MINIMO_PERMITIDO = 0.0;
  const float MAXIMO_PERMITIDO = 9999.99;
  const char *CAMINHO_ARQUIVO = "../dados.txt";
  FILE *arquivo;
  arquivo = fopen(CAMINHO_ARQUIVO, "a");
  if (!arquivo)
  {
    fprintf(stderr, "Erro ao abrir arquivo!\n");
    return EXIT_FAILURE;
  }
  fclose(arquivo);

  printf("Bem vindo!\n");
  while (1)
  {
    printf("\nMenu\n");
    printf("------------------------------------------------------------------\n");
    printf("\t1 - Escrever um numero por extenso.\n");
    printf("\t2 - Imprimir todos os numeros do arquivo em tela.\n");
    printf("\t3 - Sair\n");
    printf("------------------------------------------------------------------\n");
    printf("OPCAO: ");
    scanf("%d", &opcaoMenu);

    switch (opcaoMenu)
    {
    case 1:
      while (1)
      {
        printf("\nDigite o valor valor que deseja imprimir por extenso.\n");
        printf("O valor dever estar no intervalo de %.2f até %.2f\n", MINIMO_PERMITIDO, MAXIMO_PERMITIDO);
        printf("VALOR: ");
        scanf("%f", &valor);
        if (valor > MINIMO_PERMITIDO && valor < MAXIMO_PERMITIDO)
        {
          FILE *arquivo;
          arquivo = fopen(CAMINHO_ARQUIVO, "a");
          transformaExtenso(valor, arquivo);
          fclose(arquivo);
          break;
        }
      }
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