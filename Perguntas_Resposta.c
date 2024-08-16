#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char resposta0; // MAMÍFEROS
	char resposta1; //quadrúpede
	char resposta2; // carnivoro
	char resposta3; // herbivoro
	char resposta4; //bípedes
	char resposta5; //onívoros
	char resposta6; // frutivoros
	char resposta7;	// voadores
	char resposta8; // aquatico
	char resposta9; // AVES
	char resposta10; // não-voadores
	char resposta11; // tropicais
	char resposta12; // polares
	char resposta13; // nadadores
	char resposta14; //de rapina
	char resposta15; // RÉPTEIS
	char resposta16; // com casco
	char resposta17; // carnívoros
	char resposta18; // sem patas
	
	printf("			QUIZ");
	printf("\n		PERGUNTAS E RESPOSTAS");
	printf("\n\nPara responder basta colocar: s = SIM. n = NÃO. ");
		
	printf("\n\n\nAnimais possíveis: Leão, cavalo, homem, macaco, morcego, baleia, avestruz");
	printf("\n		   pinguim, pato, águia, tartaruga, crocodilo e cobra");
		
	printf("\n\n\nO animal é Mamíferos?: ");
	fflush(stdin);
	scanf("%c",&resposta0);
	
	if(resposta0=='s'){
	printf("É Quadrúpedes?: ");
	fflush(stdin);
	scanf("%c",&resposta1);
	}
	
		if(resposta1=='s'){
			printf("É Carnívoros?: ");			
			fflush(stdin);
			scanf("%c",&resposta2);
				if(resposta2=='s')
					printf("É o Leão!");
		}
		
			if(resposta2=='n'){
				printf("É Herbívoros?: ");
				fflush(stdin);
				scanf("%c",&resposta3);
					if(resposta3=='s')
					printf("É o Cavalo!");				
			}
			
				if(resposta1=='n'){
					printf("É Bípedes?: ");
					fflush(stdin);
					scanf("%c",&resposta4);
				}
				
					if(resposta4=='s'){
						printf("É Onívoros?: ");
						fflush(stdin);
						scanf("%c",&resposta5);
							if(resposta5=='s')
								printf("É o Homem!");
					}
					
						if(resposta5=='n'){
							printf("É Frutívoros?: ");
							fflush(stdin);
							scanf("%c",&resposta6);
								if(resposta6=='s')
									printf("É o Macaco!");
						}
						
					if(resposta4=='n'){						
						printf("É Voadores?: ");
						fflush(stdin);
						scanf("%c",&resposta7);
							if(resposta7=='s')
							printf("É o Morcego!");
					}
					
							if(resposta7=='n'){
								printf("É Aquáticos?: ");
								fflush(stdin);
								scanf("%c",&resposta8);
									if(resposta8=='s')
									printf("É a Baleia!");
							}
							
		if(resposta0=='n'){
			printf("É Aves?: ");
			fflush(stdin);
			scanf("%c",&resposta9);
		}
		
				if(resposta9=='s'){
					printf("É Não-Voadoras?: ");
					fflush(stdin);
					scanf("%c",&resposta10);
				}
				
					if(resposta10=='s'){
						printf("É Tropicais?: ");
						fflush(stdin);
						scanf("%c",&resposta11);
							if(resposta11=='s')
							printf("É o Avestruz!");
					}
					
						if(resposta11=='n'){
							printf("É Polares?: ");
							fflush(stdin);
							scanf("%c",&resposta12);
								if(resposta12=='s')
								printf("É Pinguim!");
						}
						
						if(resposta10=='n'){
							printf("É Nadadora?: ");
							fflush(stdin);
							scanf("%c",&resposta13);
								if(resposta13=='s')
								printf("É o Pato!");
						}
						
								if(resposta13=='n'){
									printf("É De Rapina?: ");
									fflush(stdin);
									scanf("%c",&resposta14);
										if(resposta14=='s')
										printf("É a Águia!");
								}
								
			if(resposta9=='n'){
				printf("É Répteis?: ");
				fflush(stdin);
				scanf("%c",&resposta15);
			}
			
				if(resposta15=='s'){
					printf("É Com Casco?: ");
					fflush(stdin);
					scanf("%c",&resposta16);
						if(resposta16=='s')
						printf("É a Tartaruga!");
				}
				
					if(resposta16=='n'){
						printf("É Carnívoros?: ");
						fflush(stdin);
						scanf("%c",&resposta17);
							if(resposta17=='s')
							printf("É o Crocodilo!");
					}
					
						if(resposta17=='n'){
							printf("É Sem Patas?: ");
							fflush(stdin);
							scanf("%c",&resposta18);
								if(resposta18=='s')
								printf("É Cobra!");
						}
	
	printf("\n\n");					
	system("PAUSE");
	
}
