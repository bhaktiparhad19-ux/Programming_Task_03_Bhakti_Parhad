#include <stdio.h>
#include <string.h>

int main() {
    char first[50], last[50], year[10];

    printf("First Name: ");
    scanf("%s", first);

    printf("Last Name: ");
    scanf("%s", last);

    printf("Birth Year: ");
    scanf("%s", year);

    printf("\nUsername Suggestions:\n");

    printf("%s%s%s\n", first, last, year);
    printf("%c.%s%s\n", first[0], last, &year[2]);
    printf("%s_%s\n", last, first);
    printf("%s%s\n", first, year);
    printf("%s%s\n", last, &year[2]);

    return 0;
}