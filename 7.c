//   1
//  212
// 32123
//4321234
//Pattern for N = 4
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=4-i; j++)
        printf(" ");
        for(j=i; j>=1; j--)
        printf("%d", j);
        for(j=2; j<=i; j++)
        printf("%d", j);
       printf("\n"); 
    }
}