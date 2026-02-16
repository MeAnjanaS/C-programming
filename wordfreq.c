#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_WORDS 100
#define MAX_LEN 50

void normalize(char *str);
void countWords(char *text, char words[][MAX_LEN], int freq[], int *uniqueCount);
int findWord(char words[][MAX_LEN], int uniqueCount, char *word);
int main() {
    char paragraph[500];
    char words[MAX_WORDS][MAX_LEN];
    int freq[MAX_WORDS] = {0};
    int uniqueCount = 0;
    printf("Enter a paragraph:\n");
    fgets(paragraph, sizeof(paragraph), stdin);
    normalize(paragraph);
    countWords(paragraph, words, freq, &uniqueCount);
    printf("\nWord Frequencies:\n");
    for(int i = 0; i < uniqueCount; i++) {
        printf("%s : %d\n", words[i], freq[i]);
    }
    return 0;
}
