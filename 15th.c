#include<stdio.h>
#include <ctype.h>
int main()
{
    char lower,upper;
    printf("Enter any lowercase number = ");
    scanf("%c",&lower);
    upper=toupper(lower);

    printf("The uppercase number = %c",upper);
}

