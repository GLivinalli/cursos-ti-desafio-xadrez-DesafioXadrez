#include <stdio.h>

//Movimento do Bispo.
void Bispo(int mov_bispo){
    if (mov_bispo > 0)
    {
        printf("Diagonal direita para cima!\n");
        Bispo(mov_bispo - 1);
    }
}

//Movimento da Torre.
void Torre(int mov_torre){
    if (mov_torre > 0)
    {
        printf("Direita\n");
        Torre(mov_torre - 1);
    }
}

//Movimento da Rainha.
void Rainha(int mov_rainha){
    if (mov_rainha > 0)
    {
        printf("Esquerda\n");
        Rainha(mov_rainha - 1);
    }
}

//Movimento do Cavalo.
void Cavalo(){
    for (int i = 1, j = 2; i > 0, j > 0; i--, j--)
    {
        if (i > 0  ){
            printf("Direita\n");
        } 
        if (j > 0)
        {
            printf("Cima\n");
        }
        
    }
}


int main() {

// Inicializando as variaveis.
    int escolha_peca;
    char* peca;

//Menu das escolhas.
    printf("Escolha a peça!\n(1)Bispo.\n(2)Torre.\n(3)Rainha.\n(4)Cavalo\n");
    scanf("%d", &escolha_peca);

//Chamando as funções.
    switch (escolha_peca)
    {
    case 1:
        printf("Bispo:\n");
        Bispo(5);
        break;

    case 2:
        printf("Torre:\n");
        Torre(5);
        break;

    case 3:
        printf("Rainha:\n");
        Rainha(8);
        break;

    case 4:
        printf("Cavalo:\n");
        Cavalo();
        break;

//Tratamento caso a escolha seja invalida.
    default:
        printf("\n\nEscolha Invalida!\n\n");
        main();
        break;
    }
    return 0;
}
