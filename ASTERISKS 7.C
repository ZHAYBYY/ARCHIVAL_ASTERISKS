#include <stdio.h>

int main() {
    int n = 3; // height of the upper half (number of rows)
    int i = 1;

    // Upper half of the diamond
    while (i <= n) {
        int spaces = n - i;
        int stars = 2 * i - 1;

        // Print spaces
        int j = 0;
        while (j < spaces) {
            printf(" ");
            j++;
        }

        // Print stars
        j = 0;
        while (j < stars) {
            printf("*");
            j++;
        }

        printf("\n");
        i++;
    }

    // Lower half of the diamond
    i = n - 1;
    while (i >= 1) {
        int spaces = n - i;
        int stars = 2 * i - 1;

        // Print spaces
        int j = 0;
        while (j < spaces) {
            printf(" ");
            j++;
        }

        // Print stars
        j = 0;
        while (j < stars) {
            printf("*");
            j++;
        }

        printf("\n");
        i--;
    }

    return 0;
}
