#include <stdio.h>
int main() {
    char ch;
    scanf(" %c", &ch);   
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
        if (lower == 'a' || lower == 'e' || lower == 'i' || 
            lower == 'o' || lower == 'u')
            printf("Vowel\n");
        else
            printf("Consonant\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    else {
        printf("Special Symbol\n");
    }
    return 0;
}