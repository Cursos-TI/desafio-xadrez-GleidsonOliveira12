#include<stdio.h> //inclusão de biblioteca

int main(){
    //Mover Bispo 5 casas na diagonal
    for (int i = 0; i < 5; i++)
    {
        printf("Bispo anda, Cima,Direita\n");//imprime a direção do movimento
    }
    //mover Rainha 8 vezes para a esquerda
    int rainha = 0;
    while (rainha < 8)
    {
        printf("Rainha para a esquerda\n", rainha);//imprime direção de movimento da rainha
        rainha++;
    }

    int torre = 0;//variavel torre

    do
    {
        printf("Torre Anda para Direita\n", torre);//imprime a direção de movimento torre
        torre++;

    } while (torre < 5);//declara variavel torre
    
    


    return 0;//finaliza o programa
}
