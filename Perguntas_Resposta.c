#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char resposta0; // MAM�FEROS
	char resposta1; //quadr�pede
	char resposta2; // carnivoro
	char resposta3; // herbivoro
	char resposta4; //b�pedes
	char resposta5; //on�voros
	char resposta6; // frutivoros
	char resposta7;	// voadores
	char resposta8; // aquatico
	char resposta9; // AVES
	char resposta10; // n�o-voadores
	char resposta11; // tropicais
	char resposta12; // polares
	char resposta13; // nadadores
	char resposta14; //de rapina
	char resposta15; // R�PTEIS
	char resposta16; // com casco
	char resposta17; // carn�voros
	char resposta18; // sem patas
	
	printf("			QUIZ");
	printf("\n		PERGUNTAS E RESPOSTAS");
	printf("\n\nPara responder basta colocar: s = SIM. n = N�O. ");
		
	printf("\n\n\nAnimais poss�veis: Le�o, cavalo, homem, macaco, morcego, baleia, avestruz");
	printf("\n		   pinguim, pato, �guia, tartaruga, crocodilo e cobra");
		
	printf("\n\n\nO animal � Mam�feros?: ");
	fflush(stdin);
	scanf("%c",&resposta0);
	
	if(resposta0=='s'){
	printf("� Quadr�pedes?: ");
	fflush(stdin);
	scanf("%c",&resposta1);
	}
	
		if(resposta1=='s'){
			printf("� Carn�voros?: ");			
			fflush(stdin);
			scanf("%c",&resposta2);
				if(resposta2=='s')
					printf("� o Le�o!");
		}
		
			if(resposta2=='n'){
				printf("� Herb�voros?: ");
				fflush(stdin);
				scanf("%c",&resposta3);
					if(resposta3=='s')
					printf("� o Cavalo!");				
			}
			
				if(resposta1=='n'){
					printf("� B�pedes?: ");
					fflush(stdin);
					scanf("%c",&resposta4);
				}
				
					if(resposta4=='s'){
						printf("� On�voros?: ");
						fflush(stdin);
						scanf("%c",&resposta5);
							if(resposta5=='s')
								printf("� o Homem!");
					}
					
						if(resposta5=='n'){
							printf("� Frut�voros?: ");
							fflush(stdin);
							scanf("%c",&resposta6);
								if(resposta6=='s')
									printf("� o Macaco!");
						}
						
					if(resposta4=='n'){						
						printf("� Voadores?: ");
						fflush(stdin);
						scanf("%c",&resposta7);
							if(resposta7=='s')
							printf("� o Morcego!");
					}
					
							if(resposta7=='n'){
								printf("� Aqu�ticos?: ");
								fflush(stdin);
								scanf("%c",&resposta8);
									if(resposta8=='s')
									printf("� a Baleia!");
							}
							
		if(resposta0=='n'){
			printf("� Aves?: ");
			fflush(stdin);
			scanf("%c",&resposta9);
		}
		
				if(resposta9=='s'){
					printf("� N�o-Voadoras?: ");
					fflush(stdin);
					scanf("%c",&resposta10);
				}
				
					if(resposta10=='s'){
						printf("� Tropicais?: ");
						fflush(stdin);
						scanf("%c",&resposta11);
							if(resposta11=='s')
							printf("� o Avestruz!");
					}
					
						if(resposta11=='n'){
							printf("� Polares?: ");
							fflush(stdin);
							scanf("%c",&resposta12);
								if(resposta12=='s')
								printf("� Pinguim!");
						}
						
						if(resposta10=='n'){
							printf("� Nadadora?: ");
							fflush(stdin);
							scanf("%c",&resposta13);
								if(resposta13=='s')
								printf("� o Pato!");
						}
						
								if(resposta13=='n'){
									printf("� De Rapina?: ");
									fflush(stdin);
									scanf("%c",&resposta14);
										if(resposta14=='s')
										printf("� a �guia!");
								}
								
			if(resposta9=='n'){
				printf("� R�pteis?: ");
				fflush(stdin);
				scanf("%c",&resposta15);
			}
			
				if(resposta15=='s'){
					printf("� Com Casco?: ");
					fflush(stdin);
					scanf("%c",&resposta16);
						if(resposta16=='s')
						printf("� a Tartaruga!");
				}
				
					if(resposta16=='n'){
						printf("� Carn�voros?: ");
						fflush(stdin);
						scanf("%c",&resposta17);
							if(resposta17=='s')
							printf("� o Crocodilo!");
					}
					
						if(resposta17=='n'){
							printf("� Sem Patas?: ");
							fflush(stdin);
							scanf("%c",&resposta18);
								if(resposta18=='s')
								printf("� Cobra!");
						}
	
	printf("\n\n");					
	system("PAUSE");
	
}
