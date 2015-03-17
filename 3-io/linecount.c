#include<stdio.h>

main() {
    int c, nl;
    nl = 0;

    /**
     * Notice that we have not used braces ({}) to denote the body of the while or if.
     * ++nl is correctly executed as required.
     */
    while((c = getchar()) != EOF)  
        if(c == '\n') // \n -> New line character 
            ++nl;

    printf("%d\n", nl);
}
