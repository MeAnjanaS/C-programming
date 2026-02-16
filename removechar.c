#include <stdio.h>
int main() {
    char str[100];
    char ch;
    fgets(str, sizeof(str), stdin);
    scanf(" %c", &ch);
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';  
    printf("Modified string: %s", str);
    return 0;
}
