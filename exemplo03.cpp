#include<stdio.h>
float somar(float a, float b){
    return a + b;
}
float sub(float a, float b){
    return a - b;
}
float multi(float a, float b){
    return a * b;
}
float div(float a, float b){
    return a / b;
}
int main (){
    float x, y;
    printf("Digite o primeiro numero:");
    scanf("%f", &x);
    printf("Digite o segundo numero:");
    scanf("%f", &y);
    printf("Soma = %.0f \n", somar(x, y));
    printf("Subtracao = %.2f \n", sub(x, y));
    printf("Multiplicacao = %.2f \n", multi(x, y));
    if ( y != 0){
        printf("Divisao = %.2f \n", div(x, y));
    }
    else {
        printf("Divisao: nao eh possivel dividir por zero \n");
    }
    return 0;
}
