#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d", &n);
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {  //overflow condition
            printf("Overflow occurred!\n");
            return 0;
        }
        reversed = reversed * 10 + digit;
        n = n / 10;
    }
    printf("%d\n", reversed);
    return 0;
}