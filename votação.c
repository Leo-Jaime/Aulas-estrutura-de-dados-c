#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
/*
uma empresa solicitou uma demanda de um software para um processo eleitoral interno.
esse progama deve simuladr uma urna eletronica.
a tela deve apresantar os seguintes dados:
opções para voto:
1- candidato antonio no cego
2 candidato nadson cobra choca
3 candidato aleijadinho de araque
4 nulo
5 branco

O progama devera ler os votos dos funcionarios, e quando foi digitado o numero 6, Apresentar as 
seguintes  informações:
a) o numero de votos de cada candidato.
b) a porcentagem de votos nulos.
c)a porcetangem de votos brancos
d) o candidato vencedor

*/

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Votacao\n");	
	char opcao_votar = 'n';
	int voto = 0;
	int antonio = 0, nadson = 0, aleijadinho = 0, nulo = 0, branco = 0,total_voto;
	char opcao_menu;
	
	total_voto = antonio + nadson + aleijadinho + nulo + branco;
	
	printf("a- Para menu de votação");
	printf("b- Para menu de votos");
	scanf("%s",&opcao_menu);
	if (opcao_menu == 'a' || 'A'){
		
		
		printf("###Opções Menu###\n");
		printf("1- Antonio no cego\n");
		printf("2- Nadson cobra choca\n");
		printf("3- Aleijadinho de Araque\n");
		printf("4- nulo\n");
		printf("5- Branco\n");  
		
				while(opcao_votar == 'n'){
			printf("Digite seu voto: ");
			scanf("%d",&voto);
			switch(voto){
				case 1: 
					printf("Voce votou antonio\n");
					antonio += 1;
					break;
				case 2:
					printf("voce votou nadson\n");
					nadson += 1;
					break;
				case 3:
					printf("voce votou alejadinho\n");
					aleijadinho += 1;
					break;
				case 4:
					printf("voce votou nulo\n");
					nulo +=1;
					break;
				case 5:
					printf("voce votou branco\n"); /// retirar todos os contadores de voto nulo branco e total do switch case
					branco += 1;
					break;
				case 6:
					printf("numero de votos e:%d",total_voto);
					break;
				case 7:
					printf("numero de votos nulo e:%d",nulo);
					break;				
					default:
						printf("digite opcao valida\n");
			}
			
			
			
			
			printf("\nFinalizar votação? S/N ");
			scanf("%s",&opcao_votar);
		}
		
		
		
	}	else{
		printf("1- numero de votos\n");
		printf("2- votos nulos\n");
		printf("3- votos brancos\n");
		printf("4- Candidato vencedor\n");
	}
	
		

	
	
	return 0;
	
	
	
}