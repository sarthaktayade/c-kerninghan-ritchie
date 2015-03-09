#include<stdio.h>

main() {
    //Use float for decimal accuracy
    float fahr, celc;
    int start, upper, step;

    start = 0;
    upper = 300;
    step = 20;
    fahr = start;
    while(fahr <= upper) {
        celc = (5.0 / 9.0) * (fahr - 32);
        /**
         *  %5.1f is a printf conversion specification.
         *  It specifies that the number fahr should be printed -
         *  1) Atleast 5 spaces wide (decimal point is also considered when calculating number of spaces. Numbers occupying less than 5 spaces get right aligned.) 
         *  2) With 1 decimal place. 
         */
        printf("%5.1f\t%6.2f\n", fahr, celc);
        fahr = fahr + step;
    }
}
