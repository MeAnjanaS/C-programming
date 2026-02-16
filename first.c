/*#include <stdio.h>

int main() {
    puts("First c Program");
    return 0;
}*/

#include <stdio.h>

int main() {
    char str[] = "First c Program";
    
    for(int i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
    }

    return 0;
}