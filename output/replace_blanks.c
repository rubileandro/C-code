#include <stdio.h>

int main() {
    int currentChar;

    while ((currentChar = getchar()) != EOF) {
        if (currentChar == '\t') {
            printf("[TAB]");
        } else if (currentChar == '\b') {
            printf("[BACK]");
        } else {
            putchar(currentChar);
        }
    }

    return 0;
}
