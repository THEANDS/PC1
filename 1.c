#include <stdio.h>
#include <stdlib.h>

#define MAX

typedef struct {
        char nome[MAX];
        char genero[MAX];
        int qtd_musica[10];
}album;

typedef struct{
        int n_musica[10];
        char titulo[MAX];
        char duracao[5];
}musica;




void Cadastra(){

}

void Listar(){
}

int main(){
    int opcao;

    do{
        printf("\n 1 - Criar o album musical");
        printf("\n 2 - Adicionar musica ao album");
        printf("\n 3 - Listar musicas do album");
        printf("\n 4 -Sair" );

        printf("\nDigite uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                Cadastra();
                break;
            case 2:
                Listar();
                break;
            case 4:
                exit(0);
                break;

            default:
                printf("\n\nOpcao invalida! Tente Novamente!\n\n");

        }
}while(opcao!=4);

    return 0;
}
