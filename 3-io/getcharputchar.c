#include<stdio.h>

main() {
   
   /**
    * We use int instead of char because getchar() returns an int.
    * getchar() basically returns an unsigned character cast to an int.
    * This is because char in C has a range from -128 to 127 and the value returned by getchar might be -1 - 255
    */
   int c;
   
   c = getchar();
   
   while(c != EOF) { //value of EOF is -1. It is an int defined in stdio.h
    putchar(c);
    c = getchar();
   } 
}
