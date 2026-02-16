#include <stdio.h>
#include <math.h>
//Armstrong number
int isArmstrong(int n) {
    int original = n, sum = 0, digits = 0;
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return (sum == original);
}


//Perfect number
int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }
    return (sum == n && n != 0);
}

int main() {
    int num;
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");
    if (isPerfect(num))
        printf("Perfect Number\n");
    else
        printf("Not Perfect Number\n");

    return 0;
}
