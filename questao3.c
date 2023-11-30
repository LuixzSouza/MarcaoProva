#include <stdio.h>
#include <string.h>

int Strings(char str1[], char str2[]) {
    int i;
    for (i = 0; strlen(str1) && strlen(str2);i++) {
        int char1 = strlen(str1);
        int char2 = strlen(str2);
        return char1 / char2;
    }
}

int main(){

    char str1[26], str2[26];
    
    printf("Solicite a primeira palavra: ");
    scanf("%s",str1);

    printf("Solicite a segunda palavra: ");
    scanf("%s",str2);

    int resultado = Strings(str1, str2);

    int char1 = strlen(str1);
    int char2 = strlen(str2);

    printf("\nTamanho da string-1: %d\n",char1);
    printf("\nTamanho da String-2: %d\n",char2);
    printf("\nA media entre as duas Strings eh: %d\n",resultado);

}