#include <stdio.h>

int main() {
    int i, j;

    printf("Pattern 1\n");

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    printf("\nPattern 2\n");

    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    printf("\nPattern 3\n");

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }

    return 0;
}