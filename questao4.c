#include <stdio.h>
#include <string.h>

int VetorString(char *minhaString[][9]) {

    int tamanho = 0;
    for (int i = 0; minhaString[i] != '\0'; i++) {
        for (int j = 0; minhaString[j] != '\0'; j++){
            tamanho = minhaString[i][j];
            int tamanho2 = strlen(minhaString[i][j]);
        }
    }
    return tamanho;
}

int main() {
    char minhaString[9][9] = {"Ana","Maria","Luiz",
                            "Joao","Antonio","Marcos",
                            "Renan","Ingrid","Igor"};

    int resultado = VetorString(minhaString[9][9]);

    printf("%d",resultado);

    return 0;
}
