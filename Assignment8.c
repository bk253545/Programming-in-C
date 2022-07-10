#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of int: %d bytes\n", sizeof(intType));
    printf("Size of float: %f bytes\n", sizeof(floatType));
    printf("Size of double: %lf bytes\n", sizeof(doubleType));
    printf("Size of char: %c byte\n", sizeof(charType));
    
    return 0;
}