#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h> // --> LOCALE Biblioteca serve para exibir acentua??o no texto
#include <windows.h>

using namespace std;

//Prototipo da fuNº?o
void menu();
void opcaoMenu();
void nivelFacil();
void nivelMedio();
void nivelDificil();
void desenvolvedores();
void regras();
void gameOver();
void sair();
void opcaoSair();

//Main -> A fuNº?o/m?todo principal do programa
int main(){
	setlocale(LC_ALL, "Portuguese"); // --> SETLOCALE serve para exibir acentua??o no texto
	
	menu();
	
	return 0;
}

//VOID NÃO necessita retornar nenhuma valor ao chamar a fuNº?o
void menu(){
	int opcao;
	system("color 09");
	do{
		printf("POR FAVOR, COLOQUE EM TELA CHEIA PARA UM MELHOR APROVEITAMENTO DO JOGO!\n\n");
		printf("A EQUIPE AGRADECE.");
		printf("\n\n\n\n\t\t\t\tPRESSIONE ENTER PARA CONTINUAR...");
		getchar();
		
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t   .d88888b.  888     888 8888888 8888888888P     8888888b.  888             d8888 888b    888 8888888888 88888888888 \n");
		printf("\t\t\t  d88P* *Y88b 888     888   888         d88P      888   Y88b 888            d88888 8888b   888 888            888     \n");
		printf("\t\t\t  888     888 888     888   888        d88P       888    888 888           d88P888 88888b  888 888            888     \n");
		printf("\t\t\t  888     888 888     888   888       d88P        888   d88P 888          d88P 888 888Y88b 888 8888888        888     \n");
		printf("\t\t\t  888     888 888     888   888      d88P         8888888P*  888         d88P  888 888 Y88b888 888            888     \n");
		printf("\t\t\t  888 Y8b 888 888     888   888     d88P          888        888        d88P   888 888  Y88888 888            888     \n");
		printf("\t\t\t  Y88b.Y8b88P Y88b. .d88P   888    d88P           888        888       d8888888888 888   Y8888 888            888     \n");
		printf("\t\t\t   *Y888888*   *Y88888P*  8888888 d8888888888     888        88888888 d88P     888 888    Y888 8888888888     888     \n");
		printf("\t\t\t         Y8b                                                                                                          \n");
		printf("\n\n\n\n\t\t\t                                                     START NOW...");
		getchar();
		system("cls");
		
		opcaoMenu();
		
	}while(opcao != 6);
}

void opcaoMenu(){
	int opcao;
	
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t---------------------------\n");
	printf("\t\t\t\t\t\t\t\t\t|          MENU           |\n");
	printf("\t\t\t\t\t\t\t\t\t---------------------------\n");
	printf("\t\t\t\t\t\t\t\t\t|   1 - NÍVEL FACÍL       |\n");
	printf("\t\t\t\t\t\t\t\t\t|   2 - NÍVEL MÉDIO       |\n");
	printf("\t\t\t\t\t\t\t\t\t|   3 - NÍVEL DÍFICIL     |\n");
	printf("\t\t\t\t\t\t\t\t\t|   4 - DESENVOLVEDORES   |\n");
	printf("\t\t\t\t\t\t\t\t\t|   5 - SAIR DO JOGO      |\n");
	printf("\t\t\t\t\t\t\t\t\t---------------------------\n");
	
	printf("\n\n\t\t\t\t\t\t\t\t\tINFORME O QUE DESEJA FAZER: ");
	scanf("%d%*c", &opcao);
	system("cls");
	
	if(opcao == 5){
		sair();
	}
	
	switch(opcao){
		case 1:
			nivelFacil();
			break;
		case 2:
			nivelMedio();
			break;
		case 3:
			nivelDificil();
			break;
		case 4:
			desenvolvedores();
			break;
		default:
			printf("\n Digite uma opção valida!\n\n");
			break;
	}
}

void nivelFacil(){
	char resposta;
	int errado_1 = 0, certo_1 = 0, pontostotal = 0, ajuda = 0, chances = 0, continuar, pontosErros, pontosAcertos;
	
	system("color 0C");
	printf("\n\n\n\n");
	printf("\t\t\t\t\t##   ##   ####    ##   ##  #######  ####                ##\n");
	printf("\t\t\t\t\t###  ##    ##     ##   ##   ##   #   ##                ###\n");
	printf("\t\t\t\t\t#### ##    ##      ## ##    ## #     ##                 ##\n");
	printf("\t\t\t\t\t## ####    ##      ## ##    ####     ##                 ##\n");
	printf("\t\t\t\t\t##  ###    ##       ###     ## #     ##   #             ##\n");
	printf("\t\t\t\t\t##   ##    ##       ###     ##   #   ##  ##             ##\n");
	printf("\t\t\t\t\t##   ##   ####       #     #######  #######           ######\n");
	printf("\n\n\n");
	system("pause");
	system("cls");
  	regras();
	
	//PERGUNTA 1
	if(errado_1 <= 3){
		printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 01 - NÍVEL FACÍL  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tMarte está localizado entre dois planetas, quais são eles?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Mercúrio e Netuno\n"); 
		printf("\t\t\t\t\t\t\tB) Vênus e Terra\n");
		printf("\t\t\t\t\t\t\tC) Saturno e Netuno\n");
		printf("\t\t\t\t\t\t\tD) Terra e Júpiter\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda é a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: MARTE É O 4º PLANETA DO SISTEMA SOLAR.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma altrnativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma altrnativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'd' || resposta == 'D'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
    //PERGUNTA 2
    if(errado_1 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 02 - NÍVEL FACÍL  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tSe você pudesse viver no espaço sem capacete, qual dos seus sentidos você não seria capaz de usar?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Olfato\n"); 
		printf("\t\t\t\t\t\t\tB) Audição\n");
		printf("\t\t\t\t\t\t\tC) Visão\n");
		printf("\t\t\t\t\t\t\tD) Paladar\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: NÃO HÁ AR NO ESPAÇO, MAS NADA O IMPEDIRÁ DE SENTIR CHEIRO.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma altrnativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'b' || resposta == 'B'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
    
    //PERGUNTA 3
    if(errado_1 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 03 - NÍVEL FACÍL  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tO que mede um 'ano-luz'?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) A massa dos corpos celestiais\n"); 
		printf("\t\t\t\t\t\t\tB) Brilho das estrelas\n");
		printf("\t\t\t\t\t\t\tC) Distância\n");
		printf("\t\t\t\t\t\t\tD) Tempo\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
				// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: ESPAÇO LINEAR OU CURVILÍNEO ENTRE DOIS OU MAIS ELEMENTOS.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma altrnativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'c' || resposta == 'C'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
    
    //PERGUNTA 4
    if(errado_1 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 04 - NÍVEL FACÍL  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQual o movimento do planeta Terra responsável pelos anos?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Translação\n"); 
		printf("\t\t\t\t\t\t\tB) Nutação\n");
		printf("\t\t\t\t\t\t\tC) Precessão\n");
		printf("\t\t\t\t\t\t\tD) Rotação\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: Em torno do sol.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'a' || resposta == 'A'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
    
    //PERGUNTA 5
    if(errado_1 <= 3){
		printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 05 - NÍVEL FACÍL  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQuais das alternativas apresentam somente planetas sólidos?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Júpiter, Netuno, Terra e Plutão\n");
		printf("\t\t\t\t\t\t\tB) Terra, Marte, Júpiter e Saturno\n");
		printf("\t\t\t\t\t\t\tC) Marte, Mercúrio, Terra e Vênus\n");
		printf("\t\t\t\t\t\t\tD) Urano, Terra, Júpiter e Marte\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
				// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: NADA MELHOR DO QUE M&M E TV.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'c' || resposta == 'C'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	
	//PERGUNTA 6
	if(errado_1 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 06 - NÍVEL FACÍL  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tEm que ano o homem pisou na lua?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) 1976\n"); 
		printf("\t\t\t\t\t\t\tB) 1969\n");
		printf("\t\t\t\t\t\t\tC) 1980\n");
		printf("\t\t\t\t\t\t\tD) 1988\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: MUITOS NOS CONFUNDEM EM JOGOS DE CARTAS.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma altrnativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'b' || resposta == 'B'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	
	//PERGUNTA 7
	if(errado_1 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 07 - NÍVEL FACÍL  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQuem é o satélite natural da Terra?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Lua\n"); 
		printf("\t\t\t\t\t\t\tB) Sol\n");
		printf("\t\t\t\t\t\t\tC) Sputnik\n");
		printf("\t\t\t\t\t\t\tD) Marte\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: EM VÁRIOS DESENHOS ANIMADOS É REPRESENTADO(A) POR UM QUEIJO.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma altrnativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'a' || resposta == 'A'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	
	//PERGUNTA 8
	if(errado_1 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 08 - NÍVEL FACÍL  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQual destes NÃO fazem parte do Sistema Solar?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Saturno\n"); 
		printf("\t\t\t\t\t\t\tB) Marte\n");
		printf("\t\t\t\t\t\t\tC) Plutão\n");
		printf("\t\t\t\t\t\t\tD) Vênus\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: FUI REBAIXADO EM 2006.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma altrnativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'c' || resposta == 'C'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	
	//PERGUNTA 9
	if(errado_1 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 09 - NÍVEL FACÍL  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tA lua influencia em qual fenômeno da terra?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Gravidade\n"); 
		printf("\t\t\t\t\t\t\tB) Tufões\n");
		printf("\t\t\t\t\t\t\tC) Furacões\n");
		printf("\t\t\t\t\t\t\tD) Marés\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: SEUS SONS SÃO AGRADÁVEIS AOS OUVIDOS.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'd' || resposta == 'D'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	
	//PERGUNTA 10
	if(errado_1 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 10 - NÍVEL FACÍL  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQual o movimento do planeta Terra responsável pelos dias e noites?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Rotação\n"); 
		printf("\t\t\t\t\t\t\tB) Nutação\n");
		printf("\t\t\t\t\t\t\tC) Precessão\n");
		printf("\t\t\t\t\t\t\tD) Translação\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: EM TORNO DE SÍ MESMA.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma altrnativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'a' || resposta == 'A'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}

	
	if(errado_1 == 4){
		gameOver();
		
		pontosErros = errado_1 * 50;
		pontosAcertos = certo_1 * 100;
		pontostotal = pontosAcertos - pontosErros;

		printf ("\t\t\t\t   RESULTADOS DO JOGO - NÍVEL FACÍL          \n\n");
		printf ("\t\t\t\t   Total de acertos  : %d              \n",certo_1);
		printf ("\t\t\t\t   Total de erros    : %d              \n",errado_1);
		printf ("\t\t\t\t   Pontuação total   : %d              \n\n",pontostotal);
		
		printf("\n\n\n\t\t\t\t   DIGITE '1' PARA REINICIAR O NÍVEL FACÍL.");
		printf("\n\t\t\t\t   DIGITE '2' PARA VOLTAR AO MENU PRINCÍPAL.");
		printf("\n\t\t\t\t   DIGITE '0' PARA ENCERRAR O JOGO.");
		printf("\n\t\t\t\t   -> ");
		scanf("%d", &continuar);
	
		if(continuar == 1){
			system("cls");
			nivelFacil();
		}
		else if(continuar == 2){
			system("cls");
			opcaoMenu();
		}
		else{
			system("cls");
			sair();
		}
	}
	
	pontosErros = errado_1 * 50;
	pontosAcertos = certo_1 * 100;
	pontostotal = pontosAcertos - pontosErros;

	printf ("\n\n\n\n\n\n\n\t\t\t\t   RESULTADOS DO JOGO - NÍVEL FACÍL          \n\n");
	printf ("\t\t\t\t   Total de acertos  : %d              \n",certo_1);
	printf ("\t\t\t\t   Total de erros    : %d              \n",errado_1);
	printf ("\t\t\t\t   Pontuação total   : %d              \n\n",pontostotal);
	
	printf("\n\n\n\t\t\t\t   DIGITE '1' PARA CONTINUAR PARA O PRÓXIMO NÍVEL (MÉDIO).");
	printf("\n\t\t\t\t   DIGITE '2' PARA VOLTAR AO MENU PRINCÍPAL.");
	printf("\n\t\t\t\t   DIGITE '0' PARA ENCERRAR O JOGO.");
	printf("\n\t\t\t\t   -> ");
	scanf("%d", &continuar);

	if(continuar == 1){
		system("cls");
		nivelMedio();
	}
	else if(continuar == 2){
		system("cls");
		opcaoMenu();
	}
	else{
		system("cls");
		sair();
	}
}



void nivelMedio(){
	
	char resposta;
	int errado_2 = 0, certo_2 = 0, pontostotal = 0, ajuda=0, chances=0, continuar, pontosErros, pontosAcertos;
	system("color 0A");
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t##   ##   ####    ##   ##  #######  ####               ####\n");
	printf("\t\t\t\t\t\t###  ##    ##     ##   ##   ##   #   ##               ##  ##\n");
	printf("\t\t\t\t\t\t#### ##    ##      ## ##    ## #     ##                   ##\n");
	printf("\t\t\t\t\t\t## ####    ##      ## ##    ####     ##                 ###\n");
	printf("\t\t\t\t\t\t##  ###    ##       ###     ## #     ##   #            ##\n");
	printf("\t\t\t\t\t\t##   ##    ##       ###     ##   #   ##  ##           ##  ##\n");
	printf("\t\t\t\t\t\t##   ##   ####       #     #######  #######           ######\n");
	printf("\n\n\n");
	system("pause");
	system("cls");
  	
  	regras();
	
	//PERGUNTA 1
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 01 - NÍVEL MÉDIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQual é o elemento mais abundante encontrado no espaço?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Carbono\n"); 
		printf("\t\t\t\t\t\t\tB) Hélio\n");
		printf("\t\t\t\t\t\t\tC) Oxigênio\n");
		printf("\t\t\t\t\t\t\tD) Hidrogênio\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: JUNTO AO GÁS ESSENCIAL PARA OS HUMANOS, FORMA O LÍQUIDO INDISPENSÁVEL PARA TODOS.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_2++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'd' || resposta == 'D'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 2
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 02 - NÍVEL MÉDIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQuais países enviaram pessoas com sucesso ao espaço?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) EUA, Rússia e China\n"); 
		printf("\t\t\t\t\t\t\tB) EUA, Japão e China\n");
		printf("\t\t\t\t\t\t\tC) R?ssia, Brasil e EUA\n");
		printf("\t\t\t\t\t\t\tD) China, Japão e FraNºa\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
	// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: SÃO OU JÁ FORAM AS MAIORES POTÊNCIAS MUNDIAIS.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_2++;
				}
		    }
   		}
   		else{
			printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
			printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
			printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'a' || resposta == 'A'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 3
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 03 - NÍVEL MÉDIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQual alternativa apresenta somente planetas gasosos?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Júpiter, Terra, Marte e Plutão\n"); 
		printf("\t\t\t\t\t\t\tB) Marte, Terra, Mercúrio e Netuno\n");
		printf("\t\t\t\t\t\t\tC) Júpiter, Saturno, Vênus e Mercúrio\n");
		printf("\t\t\t\t\t\t\tD) Júpiter, Saturno, Urano e Netuno\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: OS PLANETAS QUE POSSUEM ANÉIS.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_2++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'd' || resposta == 'D'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 4
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 04 - NÍVEL MÉDIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\t Qual desses objetos é o mais luminoso?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Um quasar\n"); 
		printf("\t\t\t\t\t\t\tB) Uma supernova \n");
		printf("\t\t\t\t\t\t\tC) Um sol com grande massa \n");
		printf("\t\t\t\t\t\t\tD) Uma hipernova\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: TEM NOME DE UM PERFUME.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_2++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'a' || resposta == 'A'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 5
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 05 - NÍVEL MÉDIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQuanto de espaço conhecido conseguimos ver da Terra?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) \"40%\"\n"); 
		printf("\t\t\t\t\t\t\tB) \"25%\"\n");
		printf("\t\t\t\t\t\t\tC) \"4%\"\n");
		printf("\t\t\t\t\t\t\tD) \"7%\"\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: SOU A METADE DE UM BIT.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_2++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'c' || resposta == 'C'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 6
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 06 - NÍVEL MÉDIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQual o nome da cadela que orbitou a terra?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Petit\n"); 
		printf("\t\t\t\t\t\t\tB) Laika\n");
		printf("\t\t\t\t\t\t\tC) Mika\n");
		printf("\t\t\t\t\t\t\tD) Luna\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: NOME MUITO COMUM ENTRE OS CÃES.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_2++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'b' || resposta == 'B'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 7
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 07 - NÍVEL MÉDIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQual foi o primeiro astronauta a pisar na lua?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Yuri Gagarin\n"); 
		printf("\t\t\t\t\t\t\tB) Pete Conrad\n");
		printf("\t\t\t\t\t\t\tC) Buzz Aldrin\n");
		printf("\t\t\t\t\t\t\tD) Neil Armstrong\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: FOI UM ENGENHEIRO AEROESPACIAL, AVIADOR NAVAL, PILOTO DE TESTE, ASTRONAUTA E PROFESSOR NORTE AMERICANO..\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_2++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'd' || resposta == 'D'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 8
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 08 - NÍVEL MÉDIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQual o maior planeta do sistema solar?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Vênus\n"); 
		printf("\t\t\t\t\t\t\tB) Saturno\n");
		printf("\t\t\t\t\t\t\tC) Júpiter\n");
		printf("\t\t\t\t\t\t\tD) Urano\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: REI DO CÉU E DOS TROV^ÕES NA MITOLOGIA ROMANA.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_2++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'c' || resposta == 'C'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 9
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 09 - NÍVEL MÉDIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tEm qual galáxia se localiza o planeta terra?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Via Láctea\n"); 
		printf("\t\t\t\t\t\t\tB) Triângulo\n");
		printf("\t\t\t\t\t\t\tC) Andrômeda\n");
		printf("\t\t\t\t\t\t\tD) Columbus Nimbos\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: MUITAS PESSOAS SÃO ALÉRGICAS A MINHA PROTEÍNA.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_2++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'a' || resposta == 'A'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
    
    //PERGUNTA 10
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 10 - NÍVEL MÉDIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tO Núcleo da terra é formado por qual(s) elementos?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Chumbo derretido e ferro\n"); 
		printf("\t\t\t\t\t\t\tB) Ferro, magnésio e silício\n");
		printf("\t\t\t\t\t\t\tC) Ferro e Níquel\n");
		printf("\t\t\t\t\t\t\tD) Somente silício em estado líquido\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: É OU SÃO FERROMAGNÉTICO(S) EM TEMPERATURA AMBIENTE.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_2++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'c' || resposta == 'C'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	if(errado_2 == 4){
		gameOver();
		
		pontosErros = errado_2 * 50;
		pontosAcertos = certo_2 * 150;
		pontostotal = pontosAcertos - pontosErros;

	    printf ("\t\t\t\t   RESULTADOS DO JOGO - NÍVEL MÉDIO          \n\n");
		printf ("\t\t\t\t   Total de acertos  : %d              \n",certo_2);
		printf ("\t\t\t\t   Total de erros    : %d              \n",errado_2);
		printf ("\t\t\t\t   Pontuação total   : %d              \n\n",pontostotal);
		
		printf("\n\n\n\t\t\t   DIGITE '1' PARA REINICIAR O NÍVEL MÉDIO.");
		printf("\n\t\t\t\t   DIGITE '2' PARA VOLTAR AO MENU PRINCÍPAL.");
		printf("\n\t\t\t\t   DIGITE '0' PARA ENCERRAR O JOGO.");
		printf("\n\t\t\t\t   -> ");
	    scanf("%d", &continuar);
	
	    if(continuar == 1){
	        system("cls");
			nivelMedio();
	    }
	    else if(continuar == 2){
	    	system("cls");
	        opcaoMenu();
	    }
	    else{
	    	system("cls");
    		sair();
		}
	}
	
	pontosErros = errado_2 * 50;
	pontosAcertos = certo_2 * 150;
	pontostotal = pontosAcertos - pontosErros;

    printf ("\n\n\n\n\n\n\n\t\t\t\t   RESULTADOS DO JOGO - NÍVEL MÉDIO          \n\n");
	printf ("\t\t\t\t   Total de acertos  : %d              \n",certo_2);
	printf ("\t\t\t\t   Total de erros    : %d              \n",errado_2);
	printf ("\t\t\t\t   Pontuação total   : %d              \n\n",pontostotal);
	
	printf("\n\n\n\t\t\t\t   DIGITE '1' PARA CONTINUAR PARA O PRÓXIMO NÍVEL (DÍFICIL).");
	printf("\n\t\t\t\t   DIGITE '2' PARA VOLTAR AO MENU PRINCÍPAL.");
	printf("\n\t\t\t\t   DIGITE '0' PARA ENCERRAR O JOGO.");
	printf("\n\t\t\t\t   -> ");
    scanf("%d", &continuar);

    if(continuar == 1){
        system("cls");
		nivelDificil();
    }
    else if(continuar == 2){
    	system("cls");
        opcaoMenu();
    }
    else{
    	system("cls");
    	sair();
	}
	
}

void nivelDificil(){
	char resposta;
	int errado_3 = 0, certo_3 = 0, pontostotal = 0, ajuda=0, chances= 0, continuar, pontosErros, pontosAcertos;
	system("color 0C");
  	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t##   ##   ####    ##   ##  #######  ####               ####\n");
	printf("\t\t\t\t\t\t\t###  ##    ##     ##   ##   ##   #   ##               ##  ##\n");
 	printf("\t\t\t\t\t\t\t#### ##    ##      ## ##    ## #     ##                   ##\n");
	printf("\t\t\t\t\t\t\t## ####    ##      ## ##    ####     ##                 ###\n");
 	printf("\t\t\t\t\t\t\t##  ###    ##       ###     ## #     ##   #               ##\n");
 	printf("\t\t\t\t\t\t\t##   ##    ##       ###     ##   #   ##  ##           ##  ##\n");
 	printf("\t\t\t\t\t\t\t##   ##   ####       #     #######  #######            ####\n");
	printf("\n\n\n");
	system("pause");
	system("cls");
  	regras();
  	
  	//PERGUNTA 1
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 01 - NÍVEL DÍFICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tDo que é constituído o espaço sideral?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) De gases iguais aos da atmosfera terrestre\n"); 
		printf("\t\t\t\t\t\t\tB) De vácuo parcial\n");
		printf("\t\t\t\t\t\t\tC) Por gás metano altamente inflam?vel\n");
		printf("\t\t\t\t\t\t\tD) De matéria escura\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: MAIS VAZIO DO QUE CHEIO.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_3++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'b' || resposta == 'B'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 2
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 02 - NÍVEL DÍFICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tPorque de vez em quando nós vemos a Lua de outra cor?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Por causa da dispersão da luz\n"); 
		printf("\t\t\t\t\t\t\tB) Devido ao riqueza em miNºrios\n");
		printf("\t\t\t\t\t\t\tC) Por causa da poluição na atmosfera terrestre\n");
		printf("\t\t\t\t\t\t\tD) Por causa de fenômenos místicos\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: ONDAS ELETROMAGNÉTICAS SE DESVIAM.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_3++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'a' || resposta == 'A'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 3
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 03 - NÍVEL DÍFICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tO que aconteceria com um astronauta se ele caísse num buraco negro?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Chegaria ao outro lado do universo\n"); 
		printf("\t\t\t\t\t\t\tB) Viraria um espaguete comprimido ao cruzar o buraco\n");
		printf("\t\t\t\t\t\t\tC) Ficaria preso em outro universo\n");
		printf("\t\t\t\t\t\t\tD) Seria destruído pelo seu campo gravitacional antes de entrar\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
			printf("\n\t\t\t\t\t\t\tDICA: AS FORÇAS PRÓXIMAS A ESTE SÃO SURPREENDENTES.\n");
			chances++; 
			printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);

				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_3++;
				}

			}
			else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);

				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'd' || resposta == 'D'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 4
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 04 - NÍVEL DÍFICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tEm quais grandes eras a história da Terra é dividida?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Idade da pedra, Medieval, Moderno, Contemporâneo\n"); 
		printf("\t\t\t\t\t\t\tB) Cambriano, Protorozoico , Arqueano, Zooriano\n");
		printf("\t\t\t\t\t\t\tC) Hadeano, Arqueano, Proterozoico, Fanerozoico\n");
		printf("\t\t\t\t\t\t\tD) Pré Cambriano, Cambriano, Medieval, Contemporâneo\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: 2 vezes 'ano', 2 vezes 'ico'.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_3++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'c' || resposta == 'C'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 5
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 05 - NÍVEL DÍFICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tEm quais desses planetas ocorre a 'chuva de diamantes'?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Saturno\n"); 
		printf("\t\t\t\t\t\t\tB) Netuno\n");
		printf("\t\t\t\t\t\t\tC) Urano\n");
		printf("\t\t\t\t\t\t\tD) Júpiter\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: DEUS ROMANO DO MAR E DOS CAVALOS.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_3++;
				}

			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'b' || resposta == 'B'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 6
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 06 - NÍVEL DÍFICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tA estrelas se originam de onde?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Quasares\n"); 
		printf("\t\t\t\t\t\t\tB) Nebulosas\n");
		printf("\t\t\t\t\t\t\tC) Buracos Negros\n");
		printf("\t\t\t\t\t\t\tD) Supernovas\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: NUVENS FORMADAS POR POEIRA CÓSMICA.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_3++;
				}
			}
			else{
		   		printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
		   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
		   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);

			if(resposta == 'b' || resposta == 'B'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 7
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 07 - NÍVEL DÍFICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tO que acontece se você for exposto ao espaço sem trajes especiais?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Você vive por 10 segundos e depois congela at? a morte\n"); 
		printf("\t\t\t\t\t\t\tB) Você morre instantaneamente\n");
		printf("\t\t\t\t\t\t\tC) Você vive 90 segundos e morre de asfixia\n");
		printf("\t\t\t\t\t\t\tD) Você vai viver por cerca de 4-5 minutos e morrer? de frio\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: SEM O QUE RESPIRAR.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
	
					if(resposta == 'c' || resposta == 'C'){
						Beep (300, 300); //Questão certa
						Beep (600, 700);
						printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
						certo_3++;
					}
					else{
						Beep (250, 300); //Questão errada
						Beep (200, 950);
						printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
						printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
						errado_3++;
					}
			}
			else{
		   		printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
		   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
		   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'c' || resposta == 'C'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 8
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 08 - NÍVEL DÍFICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tUm dia, na Lua equivale a quantos dias na Terra?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) 29,5 dias\n"); 
		printf("\t\t\t\t\t\t\tB) 32,5 dias\n");
		printf("\t\t\t\t\t\t\tC) 20,5 dias\n");
		printf("\t\t\t\t\t\t\tD) 11 dias\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: QUASE UM MÊS TERRESTRE.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_3++;
				}
			}
			else{
		   		printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
		   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
		   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'a' || resposta == 'A'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 9
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 09 - NÍVEL DÍFICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tO que aconteceria se a terra parasse de fazer o movimento de translação em redor do Sol?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Continuamente se desprenderia da órbita do sol e seria atraída pela massa do outros planetas\n"); 
		printf("\t\t\t\t\t\t\tB) Se desintegraria no espaço\n");
		printf("\t\t\t\t\t\t\tC) Seria torrada em Questão de dias pelas ondas solares\n");
		printf("\t\t\t\t\t\t\tD) Seria atraída continuamente em direção ao sol\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: OS CORPOS DE ATRAEM :).\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_3++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'd' || resposta == 'D'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 10
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta Nº 10 - NÍVEL DÍFICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tO que aconteceria se o núcleo da terra parasse de girar?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) A terra se esfriaria e voltaríamos a uma era do gelo\n"); 
		printf("\t\t\t\t\t\t\tB) O campo magnético da terra se desfaria\n");
		printf("\t\t\t\t\t\t\tC) O movimento de rotação da terra pararia\n");
		printf("\t\t\t\t\t\t\tD) Não haveria mais o calor necessário para a existência de vida\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Começa aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERTÁRIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - NÃO\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);
		//Ajuda ? a SIM ou NÃO para ajuda dos UNIVERTÁRIOS.
		//Chances SÃO as quantidades de ajudas que ele pediu.
		if(ajuda == 1){
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: AS RADIAÇÕES SOLARES NOS AFETARIAM POR FALTA DESTE....\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_3++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOCÊ JÁ USOU SUAS DICAS DISPONÍVEIS PARA ESTE NÍVEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Questão certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Questão errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOCÊ PREFERIU NÃO TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'b' || resposta == 'B'){
				Beep (300, 300); //Questão certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARABÉNS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Questão errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
  	
  	if(errado_3 == 4){
		gameOver();
		
		pontosErros = errado_3 * 50;
		pontosAcertos = certo_3 * 250;
		pontostotal = pontosAcertos - pontosErros;

	    printf ("\t\t\t\t   RESULTADOS DO JOGO - NÍVEL DÍFICIL          \n\n");
		printf ("\t\t\t\t   Total de acertos  : %d              \n",certo_3);
		printf ("\t\t\t\t   Total de erros    : %d              \n",errado_3);
		printf ("\t\t\t\t   Pontuação total   : %d              \n\n",pontostotal);
		
		printf("\n\n\n\t\t\t\t   DIGITE '1' PARA REINICIAR O NÍVEL DÍFICIL.");
		printf("\n\t\t\t\t   DIGITE '2' PARA VOLTAR AO MENU PRINCÍPAL.");
		printf("\n\t\t\t\t   DIGITE '0' PARA ENCERRAR O JOGO.");
		printf("\n\t\t\t\t   -> ");
	    scanf("%d", &continuar);
	
	    if(continuar == 1){
	        system("cls");
			nivelDificil();
	    }
	    else if(continuar == 2){
	        system("cls");
			opcaoMenu();
	    }
	    else{
	    	system("cls");
    		sair();
		}
	}
	
	pontosErros = errado_3 * 50;
	pontosAcertos = certo_3 * 250;
	pontostotal = pontosAcertos - pontosErros;

    printf ("\n\n\n\n\n\n\n\t\t\t\t   RESULTADOS DO JOGO - NÍVEL DÍFICIL          \n\n");
	printf ("\t\t\t\t   Total de acertos  : %d              \n",certo_3);
	printf ("\t\t\t\t   Total de erros    : %d              \n",errado_3);
	printf ("\t\t\t\t   Pontuação total   : %d              \n\n",pontostotal);
	
	opcaoSair();
}

void desenvolvedores(){
	int voltarMenu;
	system("color 09");
	system("cls");
	printf("\n\n");
	printf("\t        ########  ########  ######  ######## ##    ## ##     ##  #######  ##       ##     ## ######## ########   #######  ########  ########  ######       \n");
	printf("\t        ##     ## ##       ##    ## ##       ###   ## ##     ## ##     ## ##       ##     ## ##       ##     ## ##     ## ##     ## ##       ##    ##      \n");
	printf("\t        ##     ## ##       ##       ##       ####  ## ##     ## ##     ## ##       ##     ## ##       ##     ## ##     ## ##     ## ##       ##            \n");
	printf("\t        ##     ## ######    ######  ######   ## ## ## ##     ## ##     ## ##       ##     ## ######   ##     ## ##     ## ########  ######    ######       \n");
	printf("\t        ##     ## ##             ## ##       ##  ####  ##   ##  ##     ## ##        ##   ##  ##       ##     ## ##     ## ##   ##   ##             ##      \n");
	printf("\t        ##     ## ##       ##    ## ##       ##   ###   ## ##   ##     ## ##         ## ##   ##       ##     ## ##     ## ##    ##  ##       ##    ##      \n");
	printf("\t        ########  ########  ######  ######## ##    ##    ###     #######  ########    ###    ######## ########   #######  ##     ## ########  ######       \n");
	printf("\n\n\n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t      ##    ###     ######  ##    ##  ######   #######  ##    ##    |     ######   ##     ## #### ##       ##     ## ######## ########  ##     ## ######## \n");
	printf("\t      ##   ## ##   ##    ## ##   ##  ##    ## ##     ## ###   ##    |    ##    ##  ##     ##  ##  ##       ##     ## ##       ##     ## ###   ### ##       \n");
	printf("\t      ##  ##   ##  ##       ##  ##   ##       ##     ## ####  ##    |    ##        ##     ##  ##  ##       ##     ## ##       ##     ## #### #### ##       \n");
	printf("\t      ## ##     ## ##       #####     ######  ##     ## ## ## ##    |    ##   #### ##     ##  ##  ##       ######### ######   ########  ## ### ## ######   \n");
	printf("\t##    ## ######### ##       ##  ##         ## ##     ## ##  ####    |    ##    ##  ##     ##  ##  ##       ##     ## ##       ##   ##   ##     ## ##       \n");
	printf("\t##    ## ##     ## ##    ## ##   ##  ##    ## ##     ## ##   ###    |    ##    ##  ##     ##  ##  ##       ##     ## ##       ##    ##  ##     ## ##       \n");
	printf("\t ######  ##     ##  ######  ##    ##  ######   #######  ##    ##    |     ######    #######  #### ######## ##     ## ######## ##     ## ##     ## ######## \n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t                         *INSTRAGRAM*                               |                                       *INSTANGRAM*                                   \n");
	printf("\t                   instagram.com/jacksonm.f/                        |                                instagram.com/guilhermehgg/                           \n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t                          *LINKEDIN*                                |                                        *LINKEDIN*                                    \n");
	printf("\t     linkedin.com/in/jackson-marcelino-de-freitas-900a18209/        |                         linkedin.com/in/guilherme-gomes-3276a41b6/                   \n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t                                                                    |                                         *GitHub*                                     \n");
	printf("\t                                                                    |                               github.com/guilhermegomees                             \n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t                                                                    |                                                                                      \n");
	
	opcaoSair();
}

void gameOver(){
	system("color 4F");
	printf("\n\n\n\n\n");
	printf("\t\t\t\t   .d8888b.         d8888 888b     d888 8888888888      .d88888b.  888     888 8888888888 8888888b.   \n");
	printf("\t\t\t\t  d88P  Y88b       d88888 8888b   d8888 888            d88P* *Y88b 888     888 888        888   Y88b  \n");
	printf("\t\t\t\t  888    888      d88P888 88888b.d88888 888            888     888 888     888 888        888    888  \n");
	printf("\t\t\t\t  888            d88P 888 888Y88888P888 8888888        888     888 Y88b   d88P 8888888    888   d88P  \n");
	printf("\t\t\t\t  888  88888    d88P  888 888 Y888P 888 888            888     888  Y88b d88P  888        8888888P'   \n");
	printf("\t\t\t\t  888    888   d88P   888 888  Y8P  888 888            888     888   Y88o88P   888        888 T88b    \n");
	printf("\t\t\t\t  Y88b  d88P  d8888888888 888   *   888 888            Y88b. .d88P    Y888P    888        888  T88b   \n");
	printf("\t\t\t\t   *Y8888P88 d88P     888 888       888 8888888888      *Y88888P*      Y8P     8888888888 888   T88b  \n");
	printf("\n\n\n");
}

void regras(){
	system ("cls");
	printf("\n\n\n\n");
	printf("\t\t\t\t    888888b.   8888888888 888b     d888        888     888 8888888 888b    888 8888888b.   .d88888b.  \n");
	printf("\t\t\t\t    888  *88b  888        8888b   d8888        888     888   888   8888b   888 888  *Y88b d88P* *Y88b \n");
	printf("\t\t\t\t    888  .88P  888        88888b.d88888        888     888   888   88888b  888 888    888 888     888 \n");
	printf("\t\t\t\t    8888888K.  8888888    888Y88888P888        Y88b   d88P   888   888Y88b 888 888    888 888     888 \n");
	printf("\t\t\t\t    888  *Y88b 888        888 Y888P 888         Y88b d88P    888   888 Y88b888 888    888 888     888 \n");
	printf("\t\t\t\t    888    888 888        888  Y8P  888 888888   Y88o88P     888   888  Y88888 888    888 888     888 \n");
	printf("\t\t\t\t    888   d88P 888        888   *   888           Y888P      888   888   Y8888 888  .d88P Y88b. .d88P \n");
	printf("\t\t\t\t    8888888P*  8888888888 888       888            Y8P     8888888 888    Y888 8888888P*   *Y88888P*  \n");
    printf("\n");
    printf("\t\t\t\t   REGRAS DO JOGO:\n\n\n");
    printf("\t\t\t\t   - ESTE É UM JOGO DE PERGUNTAS E RESPOSTAS.\n");
	printf("\t\t\t\t   - O JOGADOR DEVERÁ ESCOLHER DENTRE AS 4 ALTERNATIVAS, SOMENTE UMA, E EM SEGUIDA PRESSIONAR \"ENTER\".\n");
	printf("\t\t\t\t   - NA HORA DE RESPONDER, O JOGADOR PODE PEDIR A AJUDA DOS UNIVERTÁRIOS, BASTA DIGITAR \"1\".\n");
	printf("\t\t\t\t   - O JOGADOR TERÁ 2 AJUDAS DURANTE CADA NÍVEL.\n");
	printf("\t\t\t\t   - O JOGADOR TERÁ 3 VIDAS DURANTE TODO O JOGO, PODENDO ERRAR SOMENTE 3 PERGUNTAS\n");
	printf("\t\t\t\t     SE CASO ERRAR 4 PERGUNTAS O JOGO SERÁ ENCERRADO.\n");
	printf("\t\t\t\t   - CADA NÍVEL TEM SEU PRÓPRIO SISTEMA DE PONTUAÇÃO: \n");
	printf("\t\t\t\t       > NÍVEL FÁCIL: PONTUAÇÃO POR CADA QUESTÃO CORRETA -> 100 PONTOS.\n");
	printf("\t\t\t\t       > NÍVEL MÉDIO: PONTUAÇÃO POR CADA QUESTÃO CORRETA -> 150 PONTOS.\n");
	printf("\t\t\t\t       > NÍVEL DÍFICIL: PONTUAÇÃO POR CADA QUESTÃO CORRETA -> 250 PONTOS.\n");
	printf("\t\t\t\t   - PARA CADA QUESTÃO ERRADA O JOGADOR PERDERÁ 50 PONTOS. \n");
	printf("\n\t\t\t\t   - A PONTUAÇÃO MÁXIMA QUE O JOGADOR PODE ALCANÇAR É DE 5000 PONTOS. \n");
	printf("\n\n\t\t\t\t   BOA SORTE S2");
	printf("\n\n\n\t\t\t\t   ");
	system("pause");
	system("cls");
}

void opcaoSair(){
	int voltarMenu;
	printf("\n\n\t========================================================================================================================================================");
	printf("\n\t   DIGITE >> '1' << PARA VOLTAR AO MENU PRINCIPAL.");
	printf("\n\t   DIGITE >> '0' << PARA ENCERRAR O JOGO.");
	printf("\n\t========================================================================================================================================================\n");
	printf("\t   ->> ");
	scanf("%d", &voltarMenu);

	if(voltarMenu == 1){
		system("cls");
		opcaoMenu();
	}else{
		system("cls");
		sair();
	}
}

void sair(){
	system("color 09");
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\tVOCÊ ESCOLHEU SAIR DO JOGO\n");
	printf("\t\t\t\t\t\t\t\t\tOBRIGADO PELA INTERAÇÃO!\n\n\n");
	printf("\t\t\t\t\t\t\t88888888888  .d8888b.  888    888        d8888 888     888 \n");
	printf("\t\t\t\t\t\t\t    888     d88P  Y88b 888    888       d88888 888     888 \n");
	printf("\t\t\t\t\t\t\t    888     888    888 888    888      d88P888 888     888 \n");
	printf("\t\t\t\t\t\t\t    888     888        8888888888     d88P 888 888     888 \n");
	printf("\t\t\t\t\t\t\t    888     888        888    888    d88P  888 888     888 \n");
	printf("\t\t\t\t\t\t\t    888     888    888 888    888   d88P   888 888     888 \n");
	printf("\t\t\t\t\t\t\t    888     Y88b  d88P 888    888  d8888888888 Y88b. .d88P \n");
	printf("\t\t\t\t\t\t\t    888      *Y8888P*  888    888 d88P     888  *Y88888P*  \n");
	exit(0);
}

