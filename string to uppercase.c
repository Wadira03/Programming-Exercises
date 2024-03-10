
#include <stdio.h>
#include <ctype.h>

void stringToUpper(char *str) {
    while (*str != '\0') {
        *str = toupper(*str);
        str++;
    }
}

int main() {
    char str[] = "hello, world!";

    printf("Original string: %s\n", str);

    stringToUpper(str);

    printf("Uppercase string: %s\n", str);

    return 0;
}

