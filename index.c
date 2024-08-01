#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;

    // Read the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read the elements of the array
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Calculate the average
    average = sum / n;

    // Print the result
    printf("The average of the entered integers is: %.2f\n", average);

    return 0;
}