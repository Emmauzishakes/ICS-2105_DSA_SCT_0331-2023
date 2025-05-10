#include <stdio.h>

int summation(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int maximum(int arr[], int n) {
    if (n == 0) return 0;
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input. Type a valid number.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int total = summation(arr, n);
    int maxVal = maximum(arr, n);

    printf("\nSummation: %d\n", total);
    printf("Maximum: %d\n", maxVal);

    return 0;
}
