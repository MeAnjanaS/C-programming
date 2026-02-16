#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CITIES 100
#define MAX_LEN 100

void sortCities(char *cities[], int n);
void freeCities(char *cities[], int n);
int main() {
    int n;
    printf("Enter number of cities: ");
    scanf("%d", &n);
    getchar(); // consume newline
    if (n <= 0 || n > MAX_CITIES) {
        printf("Invalid number of cities!\n");
        return 1;
    }
    char *cities[MAX_CITIES];
    for (int i = 0; i < n; i++) {
        char buffer[MAX_LEN];
        printf("Enter city %d: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';  
        cities[i] = (char *)malloc(strlen(buffer) + 1);
        if (cities[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        strcpy(cities[i], buffer);
    }
    sortCities(cities, n);
    printf("\nCities in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", cities[i]);
    }
    freeCities(cities, n);
    return 0;
}
