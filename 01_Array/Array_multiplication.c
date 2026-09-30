#include <stdio.h>

int main() {
    int n;

    printf("Enter size of arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], result[n];

    printf("Enter elements of first array:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++) {
        result[i] = arr1[i] * arr2[i];
    }

    printf("Multiplication of arrays: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}