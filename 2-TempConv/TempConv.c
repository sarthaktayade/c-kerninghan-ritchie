#include<stdio.h>

main() {
    
    int fahr, celc; //variables to store temperature in fahrenheit and celsius
    int start, upper, step; //variables to loop through iterations of temperature calculation
    
    //initialize starting values
    start = 0;
    upper = 300;
    step = 20;
    fahr = start;

    while(upper >= fahr) {
        celc = 5 * (fahr - 32) / 9;    
        printf("%3d\t%3d\n", fahr, celc);
        fahr = fahr + step;
    }
}
