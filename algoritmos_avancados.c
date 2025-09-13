#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//estrutura sala
typedef struct {
    char nome[50];          //nome comodo
    struct sala *esquerda;  //caminho à esquerda
    struct sala *direita;   //caminho à direita
  }sala;

  //função criar sala

  sala* criarSala(const char *nome){
    sala *novaSala =(sala*) malloc(sizeof(sala));
    if (novaSala == NULL){
        printf("erro ao alocar meoria para a sala.\n");
        exit(1);
    }
    strcpy(novaSala->nome, nome;);
    novaSala->esquerda = NULL;
    novaSala->direita = NULL;
    return novaSala;
  }

  //função explorar sala
  void explorarSalas(Sala *salaAtual){
    char escolha;
    
    while (salaAtual != NULL){
        printf("\nVoce está em %s\n", salaAtual->nome);

        //caso seja nó
        if(salaAtual->esquerda == NULL && ->direta == NULL){
            printf("\nvoce chegou no ultimo comodo\n");
            return;
        }

        //opção de caminho
        printf("escolha o caminho\n");
        if (salaAtual->esquerda != NULL)
            printf(" (e) ir para %s\n ",salaAtual->esquerda->nome);
        if (salaAtual->direita != NULL)
            printf(" (d) ir para %s\n",salaAtual->direita->nome);
            printf(" (s) para sair do jogo\n");
            printf("Sua escolha: ");
            Scanf(" %c", &escolha );

            if (escolha == 'e' && salaAtual->esquerda != NULL){
                salaAtual = salaAtual->esquerda;
            } else if (escolha == 'd' && salaAtual->direita != NULL){
                salaAtual = salaAtual->direita;
            } else if (escolha == 's'){
                printf("jogo encerrado\n");
                return;
            } else {
                printf("opção invalida");
            }
        }

  }
  int main(){
    //construção da mansão
    sala *hallEntrada =criarSala("Hall de entrada");
    sala *salaEstar =criarSala("Sala de Estar");
    sala *cozinha =criarSala("Cozinha");
    sala *bibliotca =criarsala("Bibliotca");
    sala *jardim = criarSala("Jardim");
    sala *quartoSecreto =criarSala("Quarto secreto");

    //inicia a partir do Hall de entrada
    printf("==detective Quest===\n");
    printf("bem-vindo à mansão misteriosa!\n");
    explorarSalas(hallEntrada);

    //liberação de memoria
    free(hallEntrada);
    free(salaEstar);
    free(cozinha);
    free(bibliotca);
    free(jardim);
    free(quartoSecreto);
    return 0;
  }

