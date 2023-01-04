//Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
#include <stdio.h>
void main()  
{  
    int s1, s2, s3; 
    printf("Enter three sides of triangle: ");  
    scanf("%d %d %d", &s1, &s2, &s3);  
    if(s1==s2 && s2==s3 && s3==s1)  
    {  
        printf("This is an equilateral triangle.");  
    }  
    else if(s1==s2 || s2==s3 || s2==s3) 
    {  
        printf("This is an isosceles triangle.");  
    }  
    else
    {  
        printf("This is a scalene triangle.");  
    }  
}