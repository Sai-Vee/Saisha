//find the largest number among the three numbers entered by the user.
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three no.s:");
    scanf("%d%d%d", &a,&b,&c);
    if(a>b&&a>c)
    printf("%d is the greatest of them all.", a);
    else if(b>a&&b>c)
    printf("%d is the greatest of them all.", b);
    else if(c>a&&c>b)
    printf("%d is the greatest of them all.", c);
    else
    printf("Invalid Input.");
}