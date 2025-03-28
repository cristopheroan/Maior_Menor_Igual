#include <stdio.h>

int main () {
    
    //Variaveis
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;
    
    //Gerador de números aleatorios.
    srand (time(0));
    numeroComputador = rand() % 100 + 1;//Calcula o resto de 100 e acrescenta +1. Nessa comparação ele vai ser entre 1 e 100.

    //Menu de interação.
    printf("Bem vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação!\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");
    printf("Escolha o tipo de comparação que deseja fazer: \n");
    scanf("%c", &tipoComparacao);

    printf("Digite seu Número (entre 1 e 100): \n");
    scanf("%d", &numeroJogador);

    


    //ESTRUTURA DE DECISÃO
    switch (tipoComparacao) {
    case 'M'://Variaveis de decisão do tipo 'char' deve estar entre aspas simples ''.
        printf("Você escolhe a opção Maior!\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;

    case 'N':
        printf("Você escolhe a opção Menor!\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;

    case 'I':
        printf("Você escolhe a opção Igual!\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
    
    default:
        break;
    }

    printf("Você escolheu a opção: %c\n", tipoComparacao);
    printf("O número do Computador é: %d. E o Número do Jogador é: %d\n", numeroComputador, numeroJogador);

     if (numeroJogador > numeroComputador)
     {
        printf("Parabéns, você ganhou!\n");
     } else if (numeroJogador == numeroComputador) {
        printf("Empatou\n");
     } else {
        printf("Infelizmente, você perdeu!\n");
     }
     

    return(0);
}