#include<conio.h>
int main()
{
    int n,firstDigit, lastDigit,digit;
    printf("Enter number = ");
    scanf("%d", &n);
    //Find last digit of a number
    lastDigit = n % 10;
    //Find total number of digit - 1
    digit    = (int)log10(n);
    //Find first digit
    firstDigit = (int) (n / pow(10, digit));
    printf("first digit = %d and last digit = %d", firstDigit,lastDigit);
    return 0;



}