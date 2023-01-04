//    *
//  * * *
//* * * * *
//  * * *
//    *
#include<stdio.h>
void main()
{
    int st=1, i, k, j, n;
    printf("Enter no. of desired rows:");
    scanf("%d", &n);
    int sp=n-1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=sp; j++)
        printf(" ");
        for(k=1; k<=st; k++)
        printf("*");
        if(sp>i)
        {
            sp=sp-1;
            st=st+2;
        }
        if(sp<i)
        {
            sp=sp+1;
            st=st-2;
        }
        printf("\n");
    }
}