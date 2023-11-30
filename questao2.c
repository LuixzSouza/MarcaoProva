#include <stdio.h>

int Fatorial(int numero) {
    int i, fatorial = 1;
    for( i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {

    int numero;

    printf("Solicite um numero: ");
    scanf("%d", &numero);

    int result = Fatorial(numero);

    printf("O valor de S: %d",result);

}