#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 2; i <= 50; i += 2) {
        sum += i;
    }
    printf("Sum of even numbers: %d\n", sum);
    return 0;
}
