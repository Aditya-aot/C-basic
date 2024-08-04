#include <stdio.h>

int main() {
    int n, sum = 0, i = 2;
    printf("Enter a number: ");
    scanf("%d", &n);
    do {
        sum += i;
        i += 2;
    } while (i <= n);
    printf("Sum of even numbers from 1 to %d = %d\n", n, sum);
    return 0;
}
