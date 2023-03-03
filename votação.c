#include<stdio.h>
#include<locale.h>
#include<string.h>
int main()
{
	setlocale(LC_ALL,"Portuguese_Brazil");
	printf("Votacao\n");
	char opcao_votar = 'n';
	int voto = 0;
	int antonio = 0, nadson = 0, aleijadinho = 0, nulo = 0, branco = 0,total_voto,maior_voto,vencedor;
	char opcao_menu;
	float perc_branco, perc_nulo;
	maior_voto = 0;






//menu votacao
		printf("###Opcoes Menu###\n");
		printf("1- Antonio no cego\n");
		printf("2- Nadson cobra choca\n");
		printf("3- Aleijadinho de Araque\n");
		printf("4- nulo\n");
		printf("5- Branco\n");
		printf("6- Finalizar e ver Resultado\n");

		while(opcao_votar == 'n'){

			printf("Digite seu voto: ");
			scanf("%d",&voto);
			switch(voto){
				case 1:
					printf("Voce votou antonio\n");
					antonio ++;
					total_voto++;
					break;
				case 2:
					printf("voce votou nadson\n");
					nadson ++;
					total_voto++;
					break;
				case 3:
					printf("voce votou alejadinho\n");
					aleijadinho ++;
					total_voto++;
					break;
				case 4:
					printf("voce votou nulo\n");
					nulo ++;
					total_voto++;
					break;
				case 5:
					printf("voce votou branco\n"); /// retirar todos os contadores de voto nulo branco e total do switch case
					branco += 1;
					total_voto++;
					break;
                case 6:
                    perc_branco = total_voto / branco;
                    perc_nulo = total_voto / nulo;
                    printf("Quantidade total de votos: %d\n%",total_voto);
                    printf("Quantidade de votos nulos: %.f%\n",perc_nulo);
                    printf("Quantidade de votos brancos: %.f%\n",perc_branco);
                    if (antonio > maior_voto){
                        maior_voto = antonio;
                        vencedor = 1;
                    }
                    if (nadson > maior_voto){
                        maior_voto = nadson;
                        vencedor = 2;
                    }
                    if (aleijadinho > maior_voto){
                        maior_voto = aleijadinho;
                        vencedor = 3;
                    }
                        switch(vencedor){
                            case 1:
                                printf("Candidato vencedor  Antonio no cego\n");
                                break;
                            case 2:
                                printf("Candidato vencedor  Nadson cobra choca\n");
                                break;
                            case 3:
                                printf("Candidato vencedor  Aleijadinho de Araque\n");
                                break;
                        }






                    opcao_votar = 's';


			}


            }



	return 0;
}
