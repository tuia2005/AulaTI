#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct produto{
	char nome[70];
	char tipo[70];
	int quantidade;
};

int main(){
	
	struct produto produtoLoucos[10] = {
		{"1- Rolex", "Relógio de pulço", 200,00},
		{"2- Relogio Digital", "Relogio De Mesa", 100    },
	    {"3- Despertador", "Despertador", 100   },
	    {"4- Relogio De Parede", "Relogio De Parede", 100   },
	 	{"5- Cronometro", "Cronometro", 100   },
	    {"6- Relogio De Sol", "Relogio De Sol", 100},
	};

printf("Relógio | Tipo | Preço");
for(linha=0;linha<5;linha++){
	
		printf("%s, %s, %d", produtoLoucos[linha].nome,produtoLoucos[linha].tipo,produtoLoucos[linha].quantidade);

		printf("\n");
	}
