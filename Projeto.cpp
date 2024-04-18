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
struct produto produtoLoucos[10];
void cadastroproduto(int cadastro){

	printf("Entre com o nome ");
	gets(produtoLoucos[cadastro].nome);
	printf("Entre com Tipo ");
	scanf("%s",&produtoLoucos[cadastro].tipo);
	printf("Entre com a quantidade ");
	scanf("%f",&produtoLoucos[cadastro].quantidade);
	
}

int main(){
    int opcao;
	setlocale(LC_ALL,"portuguese");
	printf("bem vindo a nossa loja de relógios, para continuar efetue login \n" );	
	printf("Deseja listar produto ou cadastrar produto? ");
	scanf("%c",&opcao);
	if (opcao == 1){
		
	
	struct produto produtoLoucos[10] = {
		{"1- Rolex", "Relógio de pulso", 200.00          },
		{"2- Relogio Digital", "Relogio De Mesa", 100    },
	    {"3- Despertador", "Despertador", 100            },
	    {"4- Relogio De Parede", "Relogio De Parede", 100},
	 	{"5- Cronometro", "Cronometro", 100              },
	    {"6- Relogio De Sol", "Relogio De Sol", 100      },
	};

printf("Relógio   |   Tipo      |   Preço \n");
for(linha=0;linha<5;linha++){
	
		printf("%s, %s, %f", produtoLoucos[linha].nome,produtoLoucos[linha].tipo,produtoLoucos[linha].quantidade);

		printf("\n");
	}

		
	}else {
		cadastroproduto(7);
	}
}