#include <stdio.h>
int findSubstring(char text[], char pattern[]) {
    int i, j;
    for (i = 0; text[i] != '\0'; i++) {
        for (j = 0; pattern[j] != '\0'; j++) {
            if (text[i + j] != pattern[j])
                break;
        }
        if (pattern[j] == '\0')  
            return i;
    }
    return -1;  
}

int main() {
    char text[100], pattern[50];
    fgets(text, sizeof(text), stdin);
    fgets(pattern, sizeof(pattern), stdin);
    for (int i = 0; text[i] != '\0'; i++)
        if (text[i] == '\n') text[i] = '\0';
    for (int i = 0; pattern[i] != '\0'; i++)
        if (pattern[i] == '\n') pattern[i] = '\0';
    int index = findSubstring(text, pattern);
    if (index != -1)
        printf("Substring found at index %d\n", index);
    else
        printf("Substring not found\n");
    return 0;
}
