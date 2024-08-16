#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int sorteado;
	int chute;
	char continua='s';
	
	printf("Escolha: ");
	printf("\n1 - Pedra");
	printf("\n2 - Papel");
	printf("\n3 - Tesoura");

	while(continua=='s' || continua=='S'){ 
	
		srand(time(NULL)); 
		sorteado = (rand()%3) + 1;
		
		printf("\n\nDigite seu chute: "); 
		scanf("%d",&chute); 
		
		
		if (sorteado == chute){
			printf("\nEmpate\n");
			printf("\nJogador: %i x %i Computador",chute,sorteado);
		}
		else
			if(chute == 1 && sorteado == 2) {
			printf("\nComputador ganhou!\n");
			printf("\nJogador: %i x %i Computador",chute,sorteado);
		}
				else 
					if (chute == 1 && sorteado ==3){
					printf("\nVocê ganhou!");
					printf("\nJogador: %i x %i Computador",chute,sorteado);
				}
						else 
							if(chute == 2 && sorteado == 1){
							printf("\nVocê ganhou!");
							("\nJogador: %i x %i Computador",chute,sorteado);
						}
							else
								if(chute == 2 && sorteado == 3){
								printf("\nComputador ganhou!");
								printf("\nJogador: %i x %i Computador",chute,sorteado);
							}
								else
									if(chute == 3 && sorteado == 1){
									printf("\nComputador ganhou!");
									printf("\nJogador: %i x %i Computador",chute,sorteado);
								}
									else
										if(chute == 3 && sorteado == 2){
										printf("\nVocê ganhou!");
										printf("\nJogador: %i x %i Computador",chute,sorteado);
									}
									
		printf("\n\nDeseja jogar novamente? (s/n) ");
		fflush(stdin);
		scanf("%c",&continua);	
						
	}
	
}
