#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Desenvolvido por Arthur Moraes e Fernando Nobre.
Sob monitoria de Benjamin Suzuki.
Para a matéria de Algoritmo e Codificações de Sistemas, do professor Pedro Henrique Girotto.
Cesupa, março de 2026.  */

// ==========================================
//      FUNÇÃO ANTI-QUEBRA (VALIDAÇÃO)
// ==========================================
int ler_inteiro(int min, int max) {
    int valor;
    int leitura;
    
    while (1) {
        leitura = scanf("%d", &valor);
        
        if (leitura != 1) {
            printf("Entrada invalida! Por favor, digite um numero inteiro: ");
            while (getchar() != '\n'); 
            continue; // Volta para o início do loop
        } 
        
        if (valor < min || valor > max) {
            printf("Opcao invalida! Digite um numero entre %d e %d: ", min, max);
            continue; // Volta para o início do loop
        } 
        
        if (valor >= min && valor <= max) {
            return valor;
        }
    }
}

int main(int argc, char *argv[]) {
    
    int opcao = 0;
    int jogar;
    
    srand(time(NULL)); 
    
    while(opcao != 4) {
        
        printf("\n=============================\n");
        printf("        Mini Jogos\n");
        printf("=============================\n");
        printf("1: Pergunta e Respostas\n");
        printf("2: Cobra na Caixa\n");
        printf("3: Gousmas Wars\n");
        printf("4: Sair\n");
        
        printf("\nDigite uma opcao: ");
        opcao = ler_inteiro(1, 4); 
        
        if(opcao == 1) {    
            // Jogo 1: Perguntas e Respostas
            jogar = 1;
            
            while(jogar == 1) {
                printf("\nBem vindo ao Pergunta e Respostas\n\n\n");
                
                int resposta;
                
                printf("Qual a capital do PA:\n");
                printf("1) Copacabana\n");
                printf("2) Abaetetuba\n");
                printf("3) Marituba\n");
                printf("4) Belem\n");
                printf("Digite a resposta: ");
                resposta = ler_inteiro(1, 4);
                
                if(resposta == 4) {
                    printf("Correto!\n");
                } 
                if(resposta != 4) {
                    printf("Incorrreto!\n");
                    printf("A alternativa correta e: Belem\n");
                }   
                
                printf("\nQuem e considerado por muitos o maior cantor pop:\n");  
                printf("1) Elvis Presley\n");   
                printf("2) Frank Sinatra\n");
                printf("3) Michael Jackson\n");
                printf("4) Freddie Mercury\n");
                printf("Digite a resposta: ");
                resposta = ler_inteiro(1, 4);
                
                if(resposta == 3) {
                    printf("Correto!\n");
                } 
                if(resposta != 3) {
                    printf("Incorreto\n");
                    printf("A resposta correta e: Michael Jackson\n");
                }   
                
                printf("\nQuem e o maior jogador de futebol de todos os tempos:\n");    
                printf("1) Cristiano Ronaldo\n");
                printf("2) Lionel Messi\n");
                printf("3) Pele\n");
                printf("4) Diego Maradona\n");
                printf("Digite a resposta: ");
                resposta = ler_inteiro(1, 4);
                
                if(resposta == 3) {
                    printf("Correto!\n");
                } 
                if(resposta != 3) {
                    printf("Incorreto\n");
                    printf("A resposta correta e: Pele\n"); 
                }
                
                printf("\nQuem fundou a Microsoft:\n");
                printf("1) Steve Jobs\n");
                printf("2) Bill Gates\n");
                printf("3) Elon Musk\n");
                printf("4) Mark Zuckerberg\n");
                printf("Digite a resposta: ");
                resposta = ler_inteiro(1, 4);
                
                if(resposta == 2) {
                    printf("Correto!\n");
                } 
                if(resposta != 2) {
                    printf("Incorreto!\n");
                    printf("A resposta correta e: Bill Gates\n");
                }
                
                printf("\nQual linguagem o computador entende diretamente:\n");
                printf("1) Binario\n");
                printf("2) Java\n");
                printf("3) Python\n");
                printf("4) C\n");
                printf("Digite a resposta: ");
                resposta = ler_inteiro(1, 4);
                
                if(resposta == 1) {
                    printf("Correto!\n");
                } 
                if(resposta != 1) {
                    printf("Incorreto!\n");
                    printf("A resposta correta e: Binario\n");
                }
                
                printf("\n=============================\n");
                printf("Deseja jogar novamente?\n");
                printf("1) SIM\n");
                printf("2) NAO\n");
                printf("Escolha: ");
                jogar = ler_inteiro(1, 2);
            }
        }
        
        if(opcao == 2) {    
            // Jogo 2: Cobra na Caixa
            jogar = 1;
            while(jogar == 1) {
                
                printf("\nBem vindo ao Cobra na caixa\n\n");
                
                char nomes[7][20] = {
                    "Maria", "Geovana", "Fabio", "Gabriel",
                    "Arthur", "Davi", "Ana",  
                };

                char jogador1[20];
                char jogador2[20];
                int escolha;
                
                printf("Escolha o jogador 1:\n");
                for(int i = 0; i < 7; i++) {
                    printf("%d - %s\n", i + 1, nomes[i]);
                }
                escolha = ler_inteiro(1, 7);  
                sprintf(jogador1, "%s", nomes[escolha - 1]);
                
                printf("\nEscolha o jogador 2:\n");
                for(int i = 0; i < 7; i++) {
                    printf("%d - %s\n", i + 1, nomes[i]);       
                }
                escolha = ler_inteiro(1, 7);      
                sprintf(jogador2, "%s", nomes[escolha - 1]);
                
                printf("\nJogadores escolhidos:\n");
                printf("%s vs %s\n", jogador1, jogador2);
                
                int botao = rand() % 5 + 1; 
                int cobra;

                do {
                    cobra = rand() % 5 + 1;
                } while(cobra == botao);        
                
                int turno = rand() % 2;     
                int caixas[6] = {0};    
                int caixa;
                
                while(1) {
                    if(turno == 0) {
                        printf("\nTurno do jogador: %s\n", jogador1);
                    } 
                    if(turno == 1) {
                        printf("\nTurno do jogador: %s\n", jogador2);
                    }
                    
                    printf("Selecione uma caixa (1-5): ");
                    caixa = ler_inteiro(1, 5);
                    
                    if(caixas[caixa] == 1) {
                        printf("Essa caixa ja foi aberta! Escolha outra.\n");
                        continue;
                    }
                    
                    caixas[caixa] = 1;
                    
                    if(caixa == botao) {
                        printf("\n>>> BOTAO ENCONTRADO! <<<\n");
                        
                        if(turno == 0) {
                            printf("%s VENCEU!\n", jogador1);
                        } 
                        if(turno == 1) {
                            printf("%s VENCEU!\n", jogador2);
                        }
                        break;
                    } 
                    
                    if(caixa == cobra) {
                        printf("\n>>> DEU COBRA!  VOCE PERDEU! <<<\n");
                        
                        if(turno == 0) {
                            printf("%s PERDEU!\n", jogador1);
                        } 
                        if(turno == 1) {
                            printf("%s PERDEU!\n", jogador2);
                        }
                        break;  
                    } 
                    
                    if(caixa != botao && caixa != cobra) {
                        printf("CAIXA VAZIA...\n");
                    }
                    
                    turno = 1 - turno;
                }   
                
                printf("\n=============================\n");
                printf("Deseja jogar novamente?\n");
                printf("1) SIM\n");
                printf("2) NAO\n");
                printf("Escolha: ");
                jogar = ler_inteiro(1, 2);
            }
        }   
        
        if(opcao == 3) {    
            // Jogo 3: Gousmas Wars
            printf("\nBem vindo ao Gousmas Wars\n");
            jogar = 1;
            
            while(jogar == 1) {
                int option, opc;
                int P1furia1 = 1, P1furia2 = 1, P2furia1 = 1, P2furia2 = 1;
                int P1escolhido = 0, P2escolhido = 0;
                int vitoria = 1;
                
                while(vitoria == 1) {
                    
                    // --- VEZ DO P1 ---
                    printf("\n--- Vez do P1 ---\n");
                    printf("1) Atacar\n");
                    printf("2) Dividir\n");
                    printf("Escolha: ");
                    option = ler_inteiro(1, 2);
                    
                    if(option == 1) {
                        if(P2furia1 > 5) { 
                            P2furia1 = 0; 
                            printf("Gousma 1 do P2 morreu!\n"); 
                        }
                        if(P2furia2 > 5) { 
                            P2furia2 = 0; 
                            printf("Gousma 2 do P2 morreu!\n"); 
                        }

                        printf("Escolha a sua Gousma para atacar.\n");
                        if(P1furia1 >= 1 && P1furia1 < 6) { 
                            printf("1 - Gousma 1 com furia %d\n", P1furia1); 
                        }
                        if(P1furia2 >= 1 && P1furia2 < 6) { 
                            printf("2 - Gousma 2 com furia %d\n", P1furia2); 
                        }

                        opc = ler_inteiro(1, 2);

                        if(opc == 1) {
                            P1escolhido = P1furia1;
                        }
                        if(opc == 2) {
                            P1escolhido = P1furia2;
                        }

                        printf("Escolha qual Gousma atacar:\n");
                        if(P2furia1 >= 1) { 
                            printf("1 - atacar a Gousma 1 (Furia: %d)\n", P2furia1); 
                        }
                        if(P2furia2 >= 1) { 
                            printf("2 - atacar a Gousma 2 (Furia: %d)\n", P2furia2); 
                        }

                        opc = ler_inteiro(1, 2);

                        if(opc == 1) {
                            P2furia1 += P1escolhido; 
                        }
                        if(opc == 2) {
                            P2furia2 += P1escolhido;
                        }

                        if(P2furia1 > 5) { 
                            P2furia1 = 0; 
                            printf("Gousma 1 do P2 morreu!\n"); 
                        }
                        if(P2furia2 > 5) { 
                            P2furia2 = 0; 
                            printf("Gousma 2 do P2 morreu!\n"); 
                        }
                    }
                    
                    if(option == 2) {
                        printf("Escolha a Gousma que voce queria dividir.\n");
                        if(P1furia1 >= 2  && P1furia1 < 6) { 
                            printf("1 - Gousma 1 com furia %d\n", P1furia1); 
                        }
                        if(P1furia2 >= 2  && P1furia2 < 6) { 
                            printf("2 - Gousma 2 com furia %d\n", P1furia2); 
                        }
                        
                        int pode_dividir = 1;
                        if((P1furia1 <= 1 && P1furia1 >= 6) || (P1furia2 <= 1 && P1furia2 >= 6)) {
                            printf("Nao e possivel dividir as Gousmas neste turno.\n");
                            pode_dividir = 0;
                        } 
                        
                        if(pode_dividir == 1) {
                            opc = ler_inteiro(1, 2);
                            
                            if(opc == 1) {
                                P1furia2 = (P1furia1 / 2) + P1furia2;
                                P1furia1 = P1furia1 / 2;
                            }
                            if(opc == 2) {
                                P1furia1 = (P1furia2 / 2) + P1furia1;
                                P1furia2 = P1furia2 / 2;
                            }
                        }
                    }

                    if(P2furia1 == 0 && P2furia2 == 0) {
                        printf("\n>>> P1 VENCEU! <<<\n");
                        vitoria = 0; 
                        break; 
                    }
                    
                    // --- VEZ DO P2 ---
                    printf("\n--- Vez do P2 ---\n");
                    printf("1) Atacar\n");
                    printf("2) Dividir\n");
                    printf("Escolha: ");
                    option = ler_inteiro(1, 2);
                    
                    if(option == 1) {
                        if(P1furia1 > 5) { 
                            P1furia1 = 0; 
                            printf("Gousma 1 do P1 morreu!\n"); 
                        }
                        if(P1furia2 > 5) { 
                            P1furia2 = 0; 
                            printf("Gousma 2 do P1 morreu!\n"); 
                        }

                        printf("Escolha a sua Gousma para atacar.\n");
                        if(P2furia1 >= 1 && P2furia1 < 6) { 
                            printf("1 - Gousma 1 com furia %d\n", P2furia1); 
                        }
                        if(P2furia2 >= 1 && P2furia2 < 6) { 
                            printf("2 - Gousma 2 com furia %d\n", P2furia2); 
                        }

                        opc = ler_inteiro(1, 2);

                        if(opc == 1) {
                            P2escolhido = P2furia1;
                        }
                        if(opc == 2) {
                            P2escolhido = P2furia2;
                        }

                        printf("Escolha qual Gousma atacar:\n");
                        if(P1furia1 >= 1) { 
                            printf("1 - Atacar a Gousma 1 (Furia: %d)\n", P1furia1); 
                        }
                        if(P1furia2 >= 1) { 
                            printf("2 - Atacar a Gousma 2 (Furia: %d)\n", P1furia2); 
                        }

                        opc = ler_inteiro(1, 2);

                        if(opc == 1) {
                            P1furia1 += P2escolhido; 
                        }
                        if(opc == 2) {
                            P1furia2 += P2escolhido;
                        }

                        if(P1furia1 > 5) { 
                            P1furia1 = 0; 
                            printf("Gousma 1 do P1 morreu!\n"); 
                        }
                        if(P1furia2 > 5) { 
                            P1furia2 = 0; 
                            printf("Gousma 2 do P1 morreu!\n"); 
                        }
                    }
                    
                    if(option == 2) {
                        printf("Escolha a Gousma que voce queria dividir.\n");
                        if(P2furia1 >= 2  && P2furia1 < 6) {
                            printf("1 - Gousma 1 com furia %d\n", P2furia1); 
                        }
                        if(P2furia2 >= 2  && P2furia2 < 6) { 
                            printf("2 - Gousma 2 com furia %d\n", P2furia2);
                        }
                        
                        int pode_dividir = 1;
                        if((P2furia1 <= 1 && P2furia1 >= 6) || (P2furia2 <= 1 && P2furia2 >= 6)) {
                            printf("Nao e possivel dividir as Gousmas neste turno.\n");
                            pode_dividir = 0;
                        } 
                        
                        if(pode_dividir == 1) {
                            opc = ler_inteiro(1, 2);
                            
                            if(opc == 1) {
                                P2furia2 = (P2furia1 / 2) + P2furia2;
                                P2furia1 = P2furia1 / 2;
                            }
                            if(opc == 2) {
                                P2furia1 = (P2furia2 / 2) + P2furia1;
                                P2furia2 = P2furia2 / 2;
                            }
                        }
                    }
                    
                    if(P1furia1 == 0 && P1furia2 == 0) {
                        printf("\n>>> P2 VENCEU! <<<\n");
                        vitoria = 0; 
                        break; 
                    }
                }
                
                printf("\n=============================\n");
                printf("O jogo terminou!\n");
                printf("1) Jogar novamente\n");
                printf("2) Voltar ao menu principal\n");
                printf("Escolha: ");
                int opcao_fim = ler_inteiro(1, 2);
                
                if(opcao_fim == 2) {
                    jogar = 0; 
                }
            }
        }   
        
        if(opcao == 4) {
            printf("Saindo do programa...\n");
        }
    }
    
    return 0;
}