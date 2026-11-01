#include<stdio.h>
#define LIN 4
#define COL 4
int main (){
    int matriz [LIN][COL];
    int positivo = 0, negativo = 0;
    for (int i = 0; i < LIN; i++){
        for (int j = 0; j < COL; j++){
            printf("Digite o elemento [%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    //imprimir a matriz
    printf("\nMatriz digitada: \n");
     for (int i = 0; i < LIN; i++){
        for (int j = 0; j < COL; j++){
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < LIN; i++){
        for (int j = 0; j < COL; j++){
            if( matriz[i][j] > 0){
                positivo++;
            } else {
                negativo++;
            }
        }
    }
    printf("\n Quantidade de positivos: %d", positivo);
    printf("\n Quantidade de negativos: %d", negativo);
    return 0;
}
