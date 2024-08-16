#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int lista[6];
	int contador=0;
	int igual=0;
	int x=0;
	int y=0;
	
	srand(time(NULL));
	
	printf("Sorteio: ");
	
	do{
		igual = 0;
		lista[x] = rand()%6+1;
		
		for(y=0 ; y < x; y++){
			if(lista[x] == lista[y]){
				igual = 1;
				printf("r(%i) ",lista[x]);
			}
		}
		if(igual == 0){
			printf("%i ",lista[x]);
			x++;
		}
		contador++;
		
	}while(x <6);
	
	printf("\n%i",contador);
	
}
