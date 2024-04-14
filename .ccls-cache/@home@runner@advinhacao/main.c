#include <stdio.h>

int main(void) {
  /* oieeee linda */
  printf("*******************************\n");
  printf("* Bem-vindo ao Jogo de Adivinhação *\n");
  // mto foda alek, vamo dança
  printf("*******************************\n");
  int numerosecreto;

  numerosecreto = 42;
  int NUMEROSECRETO = 42;

  int chute;
  printf("Qual é o seu chute? \a \n");
  scanf("%d", &chute);
  printf("Você chutou o numero %d!\n", chute);
  if (chute == numerosecreto) {
    printf("Parabens, você é o fodão\n");
  } else {
    printf("Q merda, tu é mt ruim\n");
    // boa
    if (chute > numerosecreto) {
      printf("chuta baixo nengue");
    } else {
      printf("chuta alto");
    }
  }
} // invadindo essa porra de codigo de novo
  /* lembrando:
  == é comparação de igual
  = é atribuição de variavel tipo "int numero = 5"
  e tem o != que é diferente / yes
  vou por um \n
  */