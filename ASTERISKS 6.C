#include <stdio.h>

int main() {
    int row = 0;

    while (row < 5) {
        int col = 0;

        while (col < (5 - row)) {
            printf("*");
            col++;
        }

        printf("\n");
        row++;
    }

    return 0;
}
