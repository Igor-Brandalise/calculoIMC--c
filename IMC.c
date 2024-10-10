#include <stdio.h>

float peso;
float altura;
float result;

int main(){
    printf("Qual seu peso: \n");
    scanf("%f", peso);

    printf("Qual sua altura: \n");
    scanf("%f", altura);

    result = peso/(altura*altura);
    printf("%.2f", result);

    if(result < 18.5){
        printf("Abaixo do peso \n");

    } else if(result >=18.5 || result <=24.9)
    {
        printf("Normal \n");

    } else if(result >= 25 || result <=29.9){
        printf("Sobrepeso \n");

    } else if(result >= 30 || result <= 39.9){
        printf("Obesidade \n");

    } else if(result > 40){
        printf("Obesidade mórbida");
    }
    
};