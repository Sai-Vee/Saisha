//Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.//
#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter the coordinates:");
    scanf("%d%d", &x, &y);
    if(x==0 && y==0)
       printf("It's the origin.");
    if(x>0 && y>0)
       printf("It lies in First Quadrant.");
    if(x<0 && y>0)
       printf("It lies in First Quadrant.");
    if(x<0 && y<0)
       printf("It lies in First Quadrant.");
    if(x>0 && y<0)
       printf("It lies in First Quadrant.");
}