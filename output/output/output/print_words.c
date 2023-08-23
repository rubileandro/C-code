#include <stdio.h>

#define YES 1
#define NO 0

int main() {
    int c, in_word;

    in_word = NO;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (in_word == YES) {
                in_word = NO;
                putchar('\n');
            }
        } else {
            in_word = YES;
            putchar(c);
        }
    }

    return 0;
}
