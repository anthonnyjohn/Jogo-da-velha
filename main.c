#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,j,linha,coluna, jogador = 1;
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
	printf("\n\nDigite a linha e a coluna que deseja jogar:");
	scanf("%d%d",&linha,&coluna);
	}while(linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || tabu[linha][coluna] != ' ');
	
	if(jogador == 1){
		tabu [linha][coluna] = '0';	
		jogador ++;
	}else{	
		tabu [linha][coluna] = 'X';
		jogador=1;
	}
	
	if(tabu [0][0] == '0' && tabu [0][1] == '0' && tabu [0][2] == '0' ||
		tabu [1][0] == '0' && tabu [1][1] == '0' && tabu [1][2] == '0' ||
		tabu [2][0] == '0' && tabu [2][1] == '0' && tabu [2][2] == '0'){
			printf("\nParabens!!! Jogador 1 venceu!!!\n");
		}
		
	if(tabu [0][0] == 'X' && tabu [0][1] == 'X' && tabu [0][2] == 'X' ||
		tabu [1][0] == 'X' && tabu [1][1] == 'X' && tabu [1][2] == 'X' ||
		tabu [2][0] == 'X' && tabu [2][1] == 'X' && tabu [2][2] == 'X'){
			printf("\nParabens!!! Jogador 2 venceu!!!\n");
		}
		
	if(tabu [0][0] == '0' && tabu[1][0] == '0' && tabu [2][0] == '0' ||
		tabu [0][1] == '0' && tabu[1][1] == '0' && tabu [2][1] == '0'||
		tabu [0][2] == '0' && tabu[1][2] == '0' && tabu [2][2] == '0'){
			printf("\nParabens!!! Jogador 1 venceu!!!\n");
			}	
			
	if(tabu [0][0] == 'X' && tabu[1][0] == 'X' && tabu [2][0] == 'X' ||
		tabu [0][1] == 'X' && tabu[1][1] == 'X' && tabu [2][1] == 'X'||
		tabu [0][2] == 'X' && tabu[1][2] == 'X' && tabu [2][2] == 'X'){
			printf("\nParabens!!! Jogador 2 venceu!!!\n");
			}	
	
	if(tabu [0][0] == '0' && tabu[1][1] == '0' && tabu [2][2] == '0'){
		printf("\nParabens!!! Jogador 1 venceu!!!\n");
	}
	
	if(tabu [0][0] == 'X' && tabu[1][1] == 'X' && tabu [2][2] == 'X'){
		printf("\nParabens!!! Jogador 2 venceu!!!\n");
	}
	
	if(tabu [0][2] == '0' && tabu[1][1] == '0' && tabu [2][0] == '0'){
		printf("\nParabens!!! Jogador 1 venceu!!!\n");
	}
	
	if(tabu [0][2] == 'X' && tabu[1][1] == 'X' && tabu [2][0] == 'X'){
		printf("\nParabens!!! Jogador 2 venceu!!!\n");
	}
	
	
	return 0;
}
