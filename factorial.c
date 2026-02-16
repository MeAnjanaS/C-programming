#include <stdio.h>
int main() {
    int n;
    unsigned long long factorial = 1;
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial not defined for negative numbers\n");
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("%llu\n", factorial);
    return 0;
}