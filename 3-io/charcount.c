#include<stdio.h>

main() {
    long nc;
    nc = 0;
    while(getchar() != EOF) {
        ++nc;
    }
    /**
     * Enter is also considered a character when printing this count.
     */
    printf("Count - %ld\n", nc);
}
