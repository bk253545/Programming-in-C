#include<stdio.h>
int main()
{
    int x;
    printf("Enter an Integer: ");
    scanf("%d",&x);
    if (x&1==1)
    {
        printf("Odd\n");

    }
    else{
        printf("Even\n");
    }


}