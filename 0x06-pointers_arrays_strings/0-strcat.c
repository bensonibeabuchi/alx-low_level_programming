#include <stdio.h>

char *_strcat(char *dest, char *src) {
    char *ptr = dest;

    // Move the pointer to the end of the dest string
    while (*ptr != '\0') {
        ptr++;
    }

    // Copy the characters from src to dest
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }

    // Add a null terminator to the end of the concatenated string
    *ptr = '\0';

    return dest;
}

int main() {
    char dest[50] = "Hello, ";
    char src[] = "world!";

    printf("Before concatenation: %s\n", dest);

    _strcat(dest, src);

    printf("After concatenation: %s\n", dest);

    return 0;
}

