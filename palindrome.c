#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    int left = 0;
    int right = strlen(str) - 1;
    if (str[right] == '\n') {
        str[right] = '\0';
        right--;
    }
    int isPalindrome = 1;
    while (left < right) {
        while (left < right && !isalnum(str[left]))
            left++;
        while (left < right && !isalnum(str[right]))
            right--;
        if (tolower(str[left]) != tolower(str[right])) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }
    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
