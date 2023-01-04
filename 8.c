//   *
//  ***
// *****
//*******
#include<stdio.h>
void main()
{
    for(int i=1; i<5; i++)
    {
        printf("\n");
        for(int k=4; k>i; k--)
        printf(" ");
        for(int j=1; j<=2*i-1; j++)
        printf("*");
    }
}