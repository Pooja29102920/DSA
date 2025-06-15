#include <stdio.h>
void main() {
    int i, n, first_max, sec_max;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (i == 0)
            first_max = arr[0];
        else if (arr[i] > first_max)
            first_max = arr[i];
    }
    sec_max = arr[0];

    for (i = 0; i < n; i++) {
        if (arr[i] > sec_max && arr[i] != first_max) {
            sec_max = arr[i];
        }
    }
    if (sec_max == first_max)
        printf("No second maximum value (all elements are same or only one unique maximum).\n");
    else {
        printf("The second max value is: %d\n", sec_max);
    }
}

