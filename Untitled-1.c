#include<stdio.h> //inclusão de biblioteca
//desafio xadrez iniciante
int main(){
    int movimentocavalo = 1;
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
     printf("\n"); //pular linha
    int torre = 0;//variavel torre

    do
    {
        printf("Torre Anda para Direita\n", torre);//imprime a direção de movimento torre
        torre++;

    } while (torre < 5);//declara variavel torre
    printf("\n"); //pular linha



    while (movimentocavalo--)//decrementa a variavel
    {
       for (int i = 0; i < 2; i++)
       {
        printf("Cavalo anda Cima\n");//imprime loop externo
       }
        printf("Cavalo anda Direita\n");//imprime loop interno
       
    }
    
    


    return 0;//finaliza o programa
}