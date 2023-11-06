#include <stdio.h>
#include <string.h>

int main() {
    char romano[13];
    scanf("%s", romano);

    int decimal = 0;
    int i, tamanho = strlen(romano);

    for (i = 0; i < tamanho; i++) {
        if (romano[i] == 'I') {
            if (romano[i + 1] == 'V' || romano[i + 1] == 'X') {
                decimal -= 1;
            } else {
                decimal += 1;
            }
        } else if (romano[i] == 'V') {
            decimal += 5;
        } else if (romano[i] == 'X') {
            if (romano[i + 1] == 'L' || romano[i + 1] == 'C') {
                decimal -= 10;
            } else {
                decimal += 10;
            }
        } else if (romano[i] == 'L') {
            decimal += 50;
        } else if (romano[i] == 'C') {
            if (romano[i + 1] == 'D' || romano[i + 1] == 'M') {
                decimal -= 100;
            } else {
                decimal += 100;
            }
        } else if (romano[i] == 'D') {
            decimal += 500;
        } else if (romano[i] == 'M') {
            decimal += 1000;
        }
    }

    printf("%s na base 10: %d\n", romano, decimal);

    
    int binario[20], temp = decimal, j = 0;
    while (temp > 0) {
        binario[j] = temp % 2;
        temp /= 2;
        j++;
    }
    printf("%s na base 2: ", romano);
    for (int k = j - 1; k >= 0; k--) {
        printf("%d", binario[k]);
    }
    printf("\n");

   
    char hexa[20];
    j = 0;
    while (decimal > 0) {
        int resto = decimal % 16;
        if (resto < 10) {
            hexa[j] = resto + 48;
        } else {
            hexa[j] = resto + 55;
        }
        decimal /= 16;
        j++;
    }
    printf("%s na base 16: ", romano);
    for (int k = j - 1; k >= 0; k--) {
        printf("%c", hexa[k]);
    }
    printf("\n");

    return 0;
}
