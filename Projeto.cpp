#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int linha;
struct produto{
	char nome[70];
	char tipo[70];
	float quantidade;
};

int main(){
    setlocale(LC_ALL,"portuguese");
	printf("bem vindo a nossa loja de rel�gios, para continuar efetue login \n");	
	struct produto produtoLoucos[10] = {
		{"1- Rolex", "Rel�gio de pulso", 200.00          },
		{"2- Relogio Digital", "Relogio De Mesa", 100    },
	    {"3- Despertador", "Despertador", 100            },
	    {"4- Relogio De Parede", "Relogio De Parede", 100},
	 	{"5- Cronometro", "Cronometro", 100              },
	    {"6- Relogio De Sol", "Relogio De Sol", 100      },
	};

printf("Rel�gio   |   Tipo      |   Pre�o \n");
for(linha=0;linha<5;linha++){
	
		printf("%s, %s, %f", produtoLoucos[linha].nome,produtoLoucos[linha].tipo,produtoLoucos[linha].quantidade);

		printf("\n");
	}
}