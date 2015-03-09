#include<stdio.h>

main() {
    int fahr;
    for(fahr = 0; fahr <= 300; fahr = fahr + 20) {
        /**
         * Even though fahr is int, the output of the expression below is printed as a float value because we supply 5.1f as the printf formatting specification.
         */
        printf("%3d\t%5.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}
