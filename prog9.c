#include<stdio.h>
#include<conio.h>
int main()
{
    int i, N;
    printf("Enter a Number: ");
    scanf("%d" ,&N);
    for ( i = 1; i <= N ; i++)
    {
        printf(" %d", i*i*i);
    }

}