#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void perguntaResposta(); 
void goumasWar();
void goumasWar();
void mostrar(int goumas[], int quantidade, int jogador);
void cobraNaCaixa(){

    int caixa;
    int cobra;
    int botao;
    int jogadorAtual;
    int jogarNovamente = 1;

    char *nomes[8] = {"Kaka", "Poatan", "Max", "Romario", "Dantas", "Mia", "Khalifa", "Labubu"};
    int escolha1, escolha2;
    int i;

    while(jogarNovamente == 1){

        printf("\n  \n");
        printf("     COBRA NA CAIXA\n");
        printf("\n");

        printf("\nEscolha o nome do Jogador 1:\n");
        for(i = 0; i < 8; i++){
            printf("%d - %s\n", i+1, nomes[i]);
        }
        scanf("%d",&escolha1);

        printf("\nEscolha o nome do Jogador 2:\n");
        for(i = 0; i < 8; i++){
            printf("%d - %s\n", i+1, nomes[i]);
        }
        scanf("%d",&escolha2);

        char *jogador1 = nomes[escolha1-1];
        char *jogador2 = nomes[escolha2-1];

        srand(time(NULL));

        jogadorAtual = rand() % 2;

        printf("\nSorteando quem começa...\n");

        if(jogadorAtual == 0)
            printf("%s comeca!\n", jogador1);
        else
            printf("%s comeca!\n", jogador2);

        cobra = rand() % 5 + 1;
        botao = rand() % 5 + 1;

        while(botao == cobra){
            botao = rand() % 5 + 1;
        }

        while(1){

            printf("\nCaixas: [1] [2] [3] [4] [5]\n");

            if(jogadorAtual == 0)
                printf("%s escolha uma caixa: ", jogador1);
            else
                printf("%s escolha uma caixa: ", jogador2);

            scanf("%d",&caixa);

            if(caixa == cobra){

                if(jogadorAtual == 0)
                    printf("\nCOBRA! %s perdeu!\n", jogador1);
                else
                    printf("\nCOBRA! %s perdeu!\n", jogador2);

                break;
            }

            else if(caixa == botao){

                if(jogadorAtual == 0)
                    printf("\nBOTAO! %s venceu!\n", jogador1);
                else
                    printf("\nBOTAO! %s venceu!\n", jogador2);

                break;
            }

            else{
                printf("Caixa vazia...\n");
            }

            jogadorAtual = 1 - jogadorAtual;
        }

        printf("\nJogar novamente?\n");
        printf("1 - Sim\n");
        printf("2 - Voltar ao menu\n");
        scanf("%d",&jogarNovamente);

    }

}
    
int main() {

    int opcao;

    do {

        printf("\n    ARCADE    \n");
        printf("1 - Pergunta e Resposta\n");
        printf("2 - Cobra na Caixa\n");
        printf("3 - Goumas War\n");
        printf("4 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:
                perguntaResposta();
                break;

            case 2:
                cobraNaCaixa();
                break;

            case 3:
                goumasWar();
                break;

            case 4:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida\n");

        }

    } while(opcao != 4);

    return 0;
}


    void perguntaResposta() {

    int resposta;
    int acertos = 0;

    printf("\nJOGO: PERGUNTA E RESPOSTA\n");

    // PERGUNTA 1
    printf("\n1) Qual linguagem este projeto usa?\n");
    printf("1) Java\n");
    printf("2) C\n");
    printf("3) Python\n");
    printf("4) Ruby\n");
    printf("Resposta: ");
    scanf("%d", &resposta);

    if(resposta == 2){
        printf("Correto!\n");
        acertos++;
    } else {
        printf("Errado! A resposta correta era C.\n");
    }

    // PERGUNTA 2
    printf("\n2) Qual a media de 5 alunos que tiraram 5, 8, 9, 6, 4?\n");
    printf("1) 6,3\n");
    printf("2) 6,2\n");
    printf("3) 6,5\n");
    printf("4) 6,4\n");
    printf("Resposta: ");
    scanf("%d", &resposta);

    if(resposta == 4){
        printf("Correto!\n");
        acertos++;
    } else {
        printf("Errado! A resposta correta era 6,4\n");
    }
    
    
    
    
    
    
      // PERGUNTA 3
    printf("\n3) Quanto e 15 porcento de 450?\n");
    printf("1) 67,3\n");
    printf("2) 68,2\n");
    printf("3) 69,5\n");
    printf("4) 67,5\n");
    printf("Resposta: ");
    scanf("%d", &resposta);

    if(resposta == 4){
        printf("Correto!\n");
        acertos++;
    } else {
        printf("Errado! A resposta correta era 67,5\n");
    }

    
    
    
     // PERGUNTA 4
       printf("\n4) Qual a temperatura ideal para ebulicao?\n");
    printf("1) 100c\n");
    printf("2) 200c\n");
    printf("3) 250c\n");
    printf("4) 400c\n");
    printf("Resposta: ");
    scanf("%d", &resposta);

    if(resposta == 1){
        printf("Correto!\n");
        acertos++;
    } else {
        printf("Errado! A resposta correta era 100c\n");
    }

 
    
    
    
    
    // PERGUNTA 5
       printf("\n5)Oque e um proton?\n");
    printf("1) Tem carga positiva, fica no nucleo\n");
    printf("2) Carga neutra, fica no nucleo\n");
    printf("3) Carga negativa, fica na eletrosfera\n");
    printf("4) Carga neutra, fica na eletrosfera\n");
    printf("Resposta: ");
    scanf("%d", &resposta);

    if(resposta == 1){
        printf("Correto!\n");
        acertos++;
    } else {
        printf("Errado! A resposta correta era Tem carga positiva e fica no nucleo\n");
    }
    
    printf("\nVoce acertou %d de 5 perguntas!\n", acertos);}
    


void mostrar(int goumas[], int quantidade, int jogador){
    int i;

    printf("\n Jogador %d \n", jogador);

    for(i = 0; i < quantidade; i++){
        printf("Gousma %d  Furia: %d\n", i+1, goumas[i]);
    }
}

void goumasWar(){

    int jogarNovamente = 1;

    while(jogarNovamente == 1){

        int j1[2] = {1,1};
        int j2[2] = {1,1};
        int q1 = 2, q2 = 2;

        int turno = 0;
        int escolha, origem, alvo;

        while(q1 > 0 && q2 > 0){

            mostrar(j1, q1, 1);
            mostrar(j2, q2, 2);

            printf("\nJogador %d\n", turno+1);
            printf("1 - Atacar\n");
            printf("2 - Dividir\n");
            printf("Escolha: ");
            scanf("%d", &escolha);

            if(escolha == 1){

                printf("Escolha origem e alvo: ");
                scanf("%d %d", &origem, &alvo);

                origem--;
                alvo--;

                if(turno == 0){

                    if(origem < 0 || origem >= q1 || alvo < 0 || alvo >= q2){
                        printf("Escolha invalida!\n");
                        continue;
                    }

                    int dano = j1[origem];
                    printf("Dano causado: %d\n", dano);

                    j2[alvo] += dano;

                    if(j2[alvo] > 5){
                        printf("Gousma inimiga DESINTEGROU!\n");
                        j2[alvo] = j2[q2-1];
                        q2--;
                    }

                } else {

                    if(origem < 0 || origem >= q2 || alvo < 0 || alvo >= q1){
                        printf("Escolha invalida!\n");
                        continue;
                    }

                    int dano = j2[origem];
                    printf("Dano causado: %d\n", dano);

                    j1[alvo] += dano;

                    if(j1[alvo] > 5){
                        printf("Gousma inimiga DESINTEGROU!\n");
                        j1[alvo] = j1[q1-1];
                        q1--;
                    }
                }
            } else if(escolha == 2){

                if(turno == 0 && q1 < 2){

                    printf("Qual Gousma dividir: ");
                    scanf("%d", &origem);
                    origem--;

                    if(origem < 0 || origem >= q1){
                        printf("Escolha invalida!\n");
                        continue;
                    }

                    int metade = j1[origem] / 2;

                    if(metade == 0){
                        printf("Furia muito baixa!\n");
                        continue;
                    }

                    j1[origem] -= metade;
                    j1[q1] = metade;
                    q1++;

                    printf("Dividiu! Nova Gousma com furia %d\n", metade);

                } else if(turno == 1 && q2 < 2){

                    printf("Qual Gousma dividir: ");
                    scanf("%d", &origem);
                    origem--;

                    if(origem < 0 || origem >= q2){
                        printf("Escolha invalida!\n");
                        continue;
                    }

                    int metade = j2[origem] / 2;

                    if(metade == 0){
                        printf("Furia muito baixa!\n");
                        continue;
                    }

                    j2[origem] -= metade;
                    j2[q2] = metade;
                    q2++;

                    printf("Dividiu! Nova Gousma com furia %d\n", metade);

                } else {
                    printf("Nao pode dividir!\n");
                }

            } else {
                printf("Opcao invalida!\n");
                continue;
            }

            turno = 1 - turno;
        }

        if(q1 == 0)
            printf("\nJogador 2 venceu!\n");
        else
            printf("\nJogador 1 venceu!\n");

        printf("\n1 - Jogar novamente\n2 - Menu\n");
        scanf("%d", &jogarNovamente);
    }
}
