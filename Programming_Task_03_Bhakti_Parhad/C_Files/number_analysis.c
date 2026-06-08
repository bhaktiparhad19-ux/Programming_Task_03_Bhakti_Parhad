#include <stdio.h>

int main() {
    int n, i;
    int total = 0, even = 0, odd = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        total += i;

        if(i % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Sum = %d\n", total);
    printf("Even Numbers = %d\n", even);
    printf("Odd Numbers = %d\n", odd);

    return 0;
}