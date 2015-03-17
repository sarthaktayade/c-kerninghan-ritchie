#include<stdio.h>

main() {
    double nc;
    for(nc = 0; getchar() != EOF; ++nc);
    /**
     * User %f for both float and double
     */
    printf("%.0f\n", nc);

}
