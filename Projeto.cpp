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
		{"2- Café", "bebida", 100    },
	    {"3- Oreo", "bolacha", 100   },
	    {"4- Leite", "bebida", 100   },
	 	{"5- Frango", "carne", 100   },
	    {"6- Hamburger", "carne", 100},
	};

for(linha=0;linha<5;linha++){
	
		printf("%s, %s, %d", produtoLoucos[linha].nome,produtoLoucos[linha].tipo,produtoLoucos[linha].quantidade);
		verificarBaixoEstoque(produtoLoucos[linha].quantidade);
		printf("\n");
	}