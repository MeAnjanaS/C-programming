#include <stdio.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    if (length > 0 && str[length - 1] == '\n') {
        length--;
    }
    printf("Length = %d\n", length);
    return 0;
}
