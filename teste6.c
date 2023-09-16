#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define N 50

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
	char rede[N];
	char comando[N] = {"netsh wlan show profile "};
	char rc[40] = {" key = clear"};	
	
	system("netsh wlan show profile");
	printf("Digite o nome da rede para ver a senha:\n");
	gets(rede);
	strcat(comando,rede);
	printf(comando);
	strcat(comando,rc);
	system(comando);
	system("pause");
	return 0;
}
