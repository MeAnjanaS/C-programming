#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }
    double avg = sum / n;
    printf("Average = %.2f\n", avg);
    return 0;
}
