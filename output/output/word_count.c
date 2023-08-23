#include <stdio.h>

#define IN  1 /* inside a word */
#define OUT 0 /* outside a word */

int is_letter_or_digit(int c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

/* count lines, words, and characters in input */
int main() {
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;

            // Check if the first character of the word is a letter
            if (is_letter_or_digit(c)) {
                ++nw;
            }
        }
    }

    printf("%d %d %d\n", nl, nw, nc);

    return 0;
}
