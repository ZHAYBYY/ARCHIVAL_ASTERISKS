#include <stdio.h>

int main() {
    int row = 0;

    while (row < 4) {
        int col = 0;

        while (col < 4) {
            printf("*");
            col++;
        }

        printf("\n");
        row++;
    }

    return 0;
}


