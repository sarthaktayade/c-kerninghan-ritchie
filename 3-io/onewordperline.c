/**
 * Program to print one word per line from the users input
 */

#include<stdio.h>

#define NEW_LINE_ENTERED 1
#define NEW_LINE_NOT_ENTERED 0

main() {
    int c, state;
    while((c = getchar()) != EOF) {
        if(c == '\t' || c == ' ' || c == '\n') {
           if(state == NEW_LINE_NOT_ENTERED) {
            putchar('\n');
           }
           state = NEW_LINE_ENTERED;
        } else {
            putchar(c);
            state = NEW_LINE_NOT_ENTERED;
        }
    }
}
