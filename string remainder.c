
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getFirstWord(char *str) {
    char *remainder = strchr(str, ' ');
    if (remainder != NULL) {
        *remainder = '\0';
        remainder++;
    }
    return remainder;
}

int main() {
    char str[] = "This is a test string.";

    printf("Original string: %s\n", str);

    char *firstWord = getFirstWord(str);

    printf("First word: %s\n", str);
    printf("Remainder: %s\n", firstWord);

    return 0;
}

