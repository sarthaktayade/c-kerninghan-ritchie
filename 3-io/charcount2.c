#include<stdio.h>

/**
 * Program to count blanks, tabs and new line
 */
main() {
    
    int c;
    long b, t, nl;
    
    b = 0;
    t = 0;
    nl = 0;

    while((c = getchar()) != EOF) {
        if(c == '\n') {
            ++nl;
        }
        if(c == '\t') {
            ++t;
        }
        if(c == '\b') {
            ++b;
        }
    }

    printf("New Line - %ld\n", nl);
    printf("Tab - %ld\n", t);
    printf("Backspace - %ld\n", b);
}
