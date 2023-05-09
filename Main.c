
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int validaConectores(int milhar, int centena, int dezena, int unidade)
{
  int conectores = 0;
  if (milhar != 0)
  {
    if (centena != 0 || dezena != 0 || unidade != 0)
    {
      if (centena == 0 && (dezena != 0 || unidade != 0))
      {
        conectores += 100;
      }
    }
  }

  if (centena != 0)
  {
    if (dezena != 0 || unidade != 0)
    {
      conectores += 10;
    }
  }

  if (dezena != 0)
  {
    if (unidade != 0)
    {
      conectores += 1;
    }
  }
  return conectores;
}

char *concatenar(char *inicial, char *adicionar)
{
  int tamanho1 = 0, tamanho2 = 0;
  char *extensoConcatenado;
  while (inicial[tamanho1] != '\0')
  {
    tamanho1++;
  }
  while (adicionar[tamanho2] != '\0')
  {
    tamanho2++;
  }
  int tamanhoTotal = tamanho1 + tamanho2;
  extensoConcatenado = (char *)malloc(tamanhoTotal * sizeof(char));
  int i, j;
  for (i = 0; i < tamanho1; i++)
  {
    extensoConcatenado[i] = inicial[i];
  }
  for (j = 0; j < tamanho2; j++)
  {
    extensoConcatenado[i + j] = toupper(adicionar[j]);
  }
  extensoConcatenado[tamanhoTotal] = '\0';
  return extensoConcatenado;
}

char *transformarMilhar(int milhar, char *extenso)
{
  switch (milhar)
  {
  case 1:
    // printf("Um mil ");
    extenso = concatenar(extenso, "Um mil ");
    break;
  case 2:
    // printf("Dois mil ");
    extenso = concatenar(extenso, "Dois mil ");
    break;
  case 3:
    // printf("Três mil ");
    extenso = concatenar(extenso, "Três mil ");
    break;
  case 4:
    // printf("Quatro mil ");
    extenso = concatenar(extenso, "Quatro mil ");
    break;
  case 5:
    // printf("Cinco mil ");
    extenso = concatenar(extenso, "Cinco mil ");
    break;
  case 6:
    // printf("Seis mil ");
    extenso = concatenar(extenso, "Seis mil ");
    break;
  case 7:
    // printf("Sete mil ");
    extenso = concatenar(extenso, "Sete mil ");
    break;
  case 8:
    // printf("Oito mil ");
    extenso = concatenar(extenso, "Oito mil ");
    break;
  case 9:
    // printf("Nove mil ");
    extenso = concatenar(extenso, "Nove mil ");
    break;
  default:
    break;
  }
  return extenso;
}

char *transformarCentena(int centena, int dezena, int unidade, char *extenso)
{
  switch (centena)
  {
  case 1:
    if (dezena != 0 || unidade != 0)
    {
      // printf("cento ");
      extenso = concatenar(extenso, "cento ");
    }
    else
    {
      // printf("cem ");
      extenso = concatenar(extenso, "cem ");
    }
    break;
  case 2:
    // printf("duzentos ");
    extenso = concatenar(extenso, "duzentos ");
    break;
  case 3:
    // printf("trezentos ");
    extenso = concatenar(extenso, "trezentos ");
    break;
  case 4:
    // printf("quatrocentos ");
    extenso = concatenar(extenso, "quatrocentos ");
    break;
  case 5:
    // printf("quinhentos ");
    extenso = concatenar(extenso, "quinhentos ");
    break;
  case 6:
    // printf("seiscentos ");
    extenso = concatenar(extenso, "seiscentos ");
    break;
  case 7:
    // printf("setecentos");
    extenso = concatenar(extenso, "setecentos ");
    break;
  case 8:
    // printf("oitocentos ");
    extenso = concatenar(extenso, "oitocentos ");
    break;
  case 9:
    // printf("novecentos ");
    extenso = concatenar(extenso, "novecentos ");
    break;
  default:
    break;
  }
  return extenso;
}

char *transformarDezena(int dezena, int unidade, char *extenso)
{
  switch (dezena)
  {
  case 1:
    if (unidade == 0)
    {
      // printf("dez ");
      extenso = concatenar(extenso, "dez ");
    }
    else
    {
      switch (unidade)
      {
      case 1:
        // printf("onze ");
        extenso = concatenar(extenso, "onze ");
        break;
      case 2:
        // printf("doze ");
        extenso = concatenar(extenso, "doze ");
        break;
      case 3:
        // printf("treze ");
        extenso = concatenar(extenso, "treze ");
        break;
      case 4:
        // printf("quatorze ");
        extenso = concatenar(extenso, "quatorze ");
        break;
      case 5:
        // printf("quinze ");
        extenso = concatenar(extenso, "quinze ");
        break;
      case 6:
        // printf("dezesseis ");
        extenso = concatenar(extenso, "dezesseis ");
        break;
      case 7:
        // printf("dezesete ");
        extenso = concatenar(extenso, "dezesete ");
        break;
      case 8:
        // printf("dezoito ");
        extenso = concatenar(extenso, "dezoito ");
        break;
      case 9:
        // printf("dezenove ");
        extenso = concatenar(extenso, "dezenove ");
        break;
      default:
        break;
      }
    }
    break;
  case 2:
    // printf("vinte ");
    extenso = concatenar(extenso, "vinte ");
    break;
  case 3:
    // printf("trinta ");
    extenso = concatenar(extenso, "trinta ");
    break;
  case 4:
    // printf("quarenta ");
    extenso = concatenar(extenso, "quarenta ");
    break;
  case 5:
    // printf("cinquenta ");
    extenso = concatenar(extenso, "cinquenta ");
    break;
  case 6:
    // printf("sessenta ");
    extenso = concatenar(extenso, "sessenta ");
    break;
  case 7:
    // printf("setenta ");
    extenso = concatenar(extenso, "setenta ");
    break;
  case 8:
    // printf("oitenta ");
    extenso = concatenar(extenso, "oitenta ");
    break;
  case 9:
    // printf("noventa ");
    extenso = concatenar(extenso, "noventa ");
    break;
  default:
    break;
  }

  return extenso;
}

char *transformarUnidade(int unidade, char *extenso)
{
  switch (unidade)
  {
  case 1:
    // printf("um ");
    extenso = concatenar(extenso, "um ");
    break;
  case 2:
    // printf("dois ");
    extenso = concatenar(extenso, "dois ");
    break;
  case 3:
    // printf("três ");
    extenso = concatenar(extenso, "três ");
    break;
  case 4:
    // printf("quatro ");
    extenso = concatenar(extenso, "quatro ");
    break;
  case 5:
    // printf("cinco ");
    extenso = concatenar(extenso, "cinco ");
    break;
  case 6:
    // printf("seis ");
    extenso = concatenar(extenso, "seis ");
    break;
  case 7:
    // printf("sete ");
    extenso = concatenar(extenso, "sete ");
    break;
  case 8:
    // printf("oito ");
    extenso = concatenar(extenso, "oito ");
    break;
  case 9:
    // printf("nove ");
    extenso = concatenar(extenso, "nove ");
    break;
  default:
    break;
  }

  return extenso;
}

void transformaExtenso(float valor, FILE *arquivo)
{
  float numero = valor;
  char *extenso;
  char inicial[] = "";

  // Separar milhar, centena, dezena, unidade e casas decimais
  int milhar, centena, dezena, unidade, conectores;
  int casasDecimais;

  // Obtendo a parte inteira do número
  int parteInteira = (int)numero;

  // Obtendo a parte decimal do número
  // casasDecimais = (int)((numero - parteInteira) * 100);
  casasDecimais = (int)(round(numero * 100)) % 100;

  // Separando os dígitos
  milhar = parteInteira / 1000;
  parteInteira %= 1000;
  centena = parteInteira / 100;
  parteInteira %= 100;
  dezena = parteInteira / 10;
  unidade = parteInteira % 10;

  extenso = concatenar(inicial, "");
  conectores = validaConectores(milhar, centena, dezena, unidade);
  if (parteInteira != 0)
  {
    extenso = transformarMilhar(milhar, extenso);

    if (conectores / 100 != 0)
    {
      // printf("e ");
      extenso = concatenar(extenso, "e ");
    }

    extenso = transformarCentena(centena, dezena, unidade, extenso);

    if ((conectores % 100) / 10 != 0)
    {
      // printf("e ");
      extenso = concatenar(extenso, "e ");
    }

    extenso = transformarDezena(dezena, unidade, extenso);

    if (dezena != 1)
    {
      if (conectores % 10 != 0)
      {
        // printf("e ");
        extenso = concatenar(extenso, "e ");
      }
      extenso = transformarUnidade(unidade, extenso);
    }

    if (conectores == 0 && unidade == 1)
    {
      // printf("real ");
      extenso = concatenar(extenso, "real ");
    }
    else
    {
      // printf("reais ");
      extenso = concatenar(extenso, "reais ");
    }
  }

  if (casasDecimais != 0)
  {
    if (parteInteira != 0)
    {
      // printf("e ");
      extenso = concatenar(extenso, "e ");
    }

    extenso = transformarDezena(casasDecimais / 10, casasDecimais % 10, extenso);

    if ((casasDecimais / 10) != 1)
    {
      // printf("e ");
      extenso = concatenar(extenso, "e ");

      extenso = transformarUnidade(casasDecimais % 10, extenso);
    }
    // printf("centavos");
    extenso = concatenar(extenso, "centavos");
  }

  extenso = concatenar(extenso, ";\n");
  fputs(extenso, arquivo);
  printf("%s", extenso);
  free(extenso);
}

void apresentarDados(FILE *arquivo)
{
  int contador = 0;
  char linha[120];
  printf("##################################################################\n");
  printf("Inicio do arquivo:\n");
  printf("##################################################################\n");
  while (fgets(linha, sizeof(linha), arquivo) != NULL)
  {
    printf("%s", linha);
    contador++;
  }
  printf("##################################################################\n");
  printf("Final do arquivo\n");
  printf("Total de dados no arquivo: %d\n", contador);
  printf("##################################################################\n");
}

void limparBuffer()
{
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
  {
  }
}

int main()
{
  int opcaoMenu = 0;
  float valor = 0.0f;

  const float MINIMO_PERMITIDO = 0.0f;
  const float MAXIMO_PERMITIDO = 9999.99f;
  const char *CAMINHO_ARQUIVO = "dados.txt";
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
    // fflush(stdin);
    limparBuffer();

    switch (opcaoMenu)
    {
    case 1:
      while (1)
      {
        printf("\nDigite o valor valor que deseja imprimir por extenso.\n");
        printf("O valor dever estar no intervalo de %.2f até %.2f\n", MINIMO_PERMITIDO, MAXIMO_PERMITIDO);
        printf("VALOR: ");
        scanf("%f", &valor);
        limparBuffer();

        if (valor > MINIMO_PERMITIDO && valor < MAXIMO_PERMITIDO)
        {
          FILE *arquivo;
          arquivo = fopen(CAMINHO_ARQUIVO, "a");
          if (!arquivo)
          {
            fprintf(stderr, "Erro ao abrir arquivo!\n");
            return EXIT_FAILURE;
          }
          transformaExtenso(valor, arquivo);
          fclose(arquivo);
          break;
        }
      }
      break;
    case 2:
      FILE *arquivo;
      arquivo = fopen(CAMINHO_ARQUIVO, "r");
      if (!arquivo)
      {
        fprintf(stderr, "Erro ao abrir arquivo!\n");
        return EXIT_FAILURE;
      }

      apresentarDados(arquivo);
      fclose(arquivo);
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