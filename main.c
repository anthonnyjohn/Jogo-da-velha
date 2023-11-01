#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,j,linha,coluna = 0;
	char tabu[3][3];
	
	
	
	
	for (i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			
			tabu[i][j]=' ';
						
		}
		
	}
	
	printf("\n\n\t 0   1   2\n\n");
	for (i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			if(j == 0){
				printf("\t");
			}
			
			printf(" %c",tabu[i][j]);
			
			if(j < 2){
			
				printf(" |");
			}
			if(j == 2){
				
				printf("   %d",i);
			}
				
		}
		if(i < 2){
			printf("\n\t-----------");
		}
		printf("\n");
		
	}
	do{
	printf("Digite a linha e a coluna que deseja jogar:");
	scanf("%d%d",&linha,&coluna);
	}while(linha < 0 || linha > 2 || coluna < 0 || coluna > 2);
	
	
	
	return 0;
}
