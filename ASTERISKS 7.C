#include <stdio.h>

int main() {
    int jhay = 3; // height of the upper half (number of rows)
    int jas = 1;

    // Upper half of the diamond
    while (jas <= jhay) {
        int spaces = jhay - jas;
        int stars = 2 * jas - 1;

        // Print spaces
        int lip = 0;
        while (lip < spaces) {
            printf(" ");
            lip++;
        }

        // Print stars
        lip = 0;
        while (lip < stars) {
            printf("*");
            lip++;
        }

        printf("\n");
        jas++;
    }

    // Lower half of the diamond
    jas = jhay - 1;
    while (jas >= 1) {
        int spaces = jhay - jas;
        int stars = 2 * jas - 1;

        // Print spaces
        int lip = 0;
        while (lip < spaces) {
            printf(" ");
            lip++;
        }

        // Print stars
        lip = 0;
        while (lip < stars) {
            printf("*");
            lip++;
        }

        printf("\n");
        jas--;
    }

    return 0;
}

