#include <stdio.h>

int SomMulSub(int num1,int num2) {
    if (num1 < num2) {
        return num1 + num2;
    } else if (num1 > num2) {
        return num1 - num2;
    } else if (num1 == num2) {
        return num1 * num2;
    } else {
        return 0;
    }
}

int main(){

    int num1, num2;

    printf("Solicite Numero-1: ");
    scanf("%d", &num1);

    printf("Solicite Numero-2: ");
    scanf("%d", &num2);

    int resultado = SomMulSub(num1, num2);

    printf(" O resultado de %d ", resultado);

}