#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "admin123";
    char entered[50];
    int attempts = 0;

    while(attempts < 3) {
        printf("Enter password: ");
        scanf("%s", entered);

        if(strcmp(password, entered) == 0) {
            printf("Access Granted\n");
            return 0;
        }

        attempts++;
        printf("Incorrect Password\n");
    }

    printf("Account Locked\n");

    return 0;
}