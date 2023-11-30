#include <stdio.h>
#include <string.h>

int Polindromo(char palavra[]) {
    int tamanho = strlen(palavra);
    for (int i = 0; i < tamanho / 2; i++) { 
        if (palavra[i] != palavra[tamanho - i - 1]) {
            return 0;
        } else {
            return -1;
        }
    }
}

int main() {
    char palavra[26];

    printf("Insira uma palavra: ");
    scanf("%s", palavra);

    int resultado = Polindromo(palavra);

    if(resultado == 0){
        printf("Eh um Polindromo");
    } else {
        printf("Nao Polindromo");
    }

}