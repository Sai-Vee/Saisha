//check whether the year entered by the user is a leap year or not.
#include<stdio.h>
void main()
{
    int y;
    printf("Enter Year:");
    scanf("%d", &y);
    if(((y%4==0) && (y%100!=0))||(y%400==0))
        printf("It's a Leap Year");
    else
        printf("It's not a Leap Year");
}