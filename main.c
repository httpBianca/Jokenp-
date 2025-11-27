#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
  int escolha, opcoesJogo,  escolhaComp;

  printf("******************  JOQUENPÔ  ***************\n");
  printf("Bem vindo ao super jogo, espero que se divirta!");
  printf("\n\n");
  printf("Para começarmos, por favor, escolha uma das opções: \n\n");
  printf("1. Já sei as regras, quero jogar!\n2. Ver regras!\n");
  printf("Digite a opção desejada: ");
  scanf("%d", &opcoesJogo);

  switch (opcoesJogo){
    case 1:
    printf("\n\nOk, vamos jogar!");
      
    //Usuário escolhe uma das opções do jogo
    printf("\nEscolha uma das opções: \n");
    printf(" 1. Pedra\n 2. Papel\n 3. Tesoura\n");
    printf("\nDigite a opção desejada: ");
    scanf("%d", &escolha);

    //Random - Escolha aleatoria do computador
    srand(time(0));
    escolhaComp = rand() % 3 + 1;

    switch (escolha){
      case 1:
        printf("\nJogador: Pedra - ");
      break;
      case 2:
        printf("\nJogador: Papel - ");
      break;
      case 3:
        printf("\nJogador: Tesoura - ");
      break;
      default:
        printf("\nOpção Invalida!");
      break;
    }//Fim do Switch de escolha do usuário
      
    //Escolha aleatoria do computador
    switch (escolhaComp){
      case 1:
        printf("Computador: Pedra!\n");
      break;
      case 2:
        printf("Computador: Papel!\n");
      break;
      case 3:
        printf("Computador: Tesoura!\n");
      break;
    } //Fim do Switch de escolha do computador

    if(escolha == 1 && escolhaComp == 3 || escolha == 2 && escolhaComp == 1 || escolha == 3 && escolhaComp == 2){
      printf("\nVocê Venceu! Parabéns");
    }
    else if (escolha == escolhaComp){
      printf("\nOlha, Parece que tivemos um empate, Tente novamente!");
    }
    else{
      printf("\nVocê Perdeu,Continue tentando!");
    }
  //Fim do case 1
  break;
    //Case de Regras do Jogo
  case 2:
    printf("\n\n\n");
    printf("Ok, vamos para as regras\n\n");
    printf("Você tem 3 opções: Pedra, Papel e Tesoura\n");
    printf("Funciona assim\nPedra Ganha de Tesoura,\nPapel Ganha de Pedra,\nTesoura Ganha de Papel\n\n");
    printf("Beleza, pronto para jogar?");
    printf("\n\n");
  }
  
  return 0;
}
