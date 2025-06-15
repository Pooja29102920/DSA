#include <stdio.h>
void main() {
    int i, n, first_max;
    printf("enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements in the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    first_max = arr[0]; 
    for (i = 1; i < n; i++) {
        if (first_max < arr[i]) {
            first_max = arr[i];
        }
    }
    printf("The max value is: %d", first_max);
}

