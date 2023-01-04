//  * * * * *
//    * * *
//      *
//    * * *
//  * * * * *
#include<stdio.h>
void main()
{
    for(int i=3; i>=2; i--)
    {
        for(int k=i; k<3; k++)
        printf(" ");
        for(int j=1; j<=2*i-1; j++)
        printf("*");
        printf("\n");
    }
    for(int i=1; i<=3; i++)
    {
        for(int k=3; k>i; k--)
        printf(" ");
        for(int j=1; j<=2*i-1; j++)
        printf("*");
        printf("\n");
    }
}