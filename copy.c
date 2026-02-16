#include <stdio.h>
void safestrcpy(char *dest, const char *src, int dest_size) {
    int i = 0;
    while (src[i] != '\0' && i < dest_size - 1) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    char source[] = "HelloWorld";
    char dest[6];  
    safestrcpy(dest, source, sizeof(dest));
    printf("Copied string: %s\n", dest);
    return 0;
}
