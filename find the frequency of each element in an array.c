#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int freq[n];
    for (i = 0; i < n; i++) {
        freq[i] = 0;
    }
    for (i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    printf("Frequency of each element:\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", i, freq[i]);
        }
    }
    return 0;
}
