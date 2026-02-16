// Iterative
/*#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0) return 0;
    long long a = 0, b = 1;
    for (int i = 1; i <= n; i++) {
        printf("%lld ", a);
        long long next = a + b;
        a = b;
        b = next;
    }
    return 0;
}*/

// Recursive

#include <stdio.h>
long long fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%lld ", fib(i));
    }
    return 0;
}