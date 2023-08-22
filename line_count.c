#include <stdio.h>

int main() /* count lines, tabs, and blanks in input */
{
    int c, nl, nt, nb;

    nl = 0;   /* count of newline characters */
    nt = 0;   /* count of tab characters */
    nb = 0;   /* count of blank space characters */

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++nt;
        else if (c == ' ')
            ++nb;
    }

    printf("Newlines: %d\n", nl);
    printf("Tabs: %d\n", nt);
    printf("Blanks: %d\n", nb);

    return 0;
}
