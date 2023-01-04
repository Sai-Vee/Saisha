//https://practice.geeksforgeeks.org/problems/number-pattern0517/1
#include<stdio.h>
void main()
{
    int i,j,k,l,n;
    printf("Enter the no. of terms:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<n-i; j++)
        printf(" ");
        for(k=1; k<i; k++)
        printf("%d", k);
        for(l=i; l>=1; l--)
        printf("%d", l);
        printf("\t");
    }
}