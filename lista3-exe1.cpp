/* quest�o 01 - lista 3*/

#include <stdio.h>

int main () {
	
	//Declara��o de variaveis
	int n,y,i,m;
	
	//Leitura de dados
	printf("Digite n e y: ");
	scanf("%d %d",&n,&y);
	
	//Executar comandos
	for(i=0;m<n;i++){
		printf("%d",m);
		m = y * i;		
	}	
}
