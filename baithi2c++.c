#include <stdio.h>

int main() {
    int numbers[10]; // Khai b�o m?ng l�u tr? 10 s? nguy�n
    int i;

    printf("Input 10 numbers:\n");

    for (i = 0; i < 10; i++) {
        printf("+ Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Result: ");

    for (i = 9; i >= 0; i--) {
        printf("%d", numbers[i]);

        if (i != 0) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
