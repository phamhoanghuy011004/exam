#include <stdio.h>

int main() {
    int numbers[10]; // Khai báo m?ng lıu tr? 10 s? nguyên
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
