//1
//23
//345
//4567
#include<stdio.h>
void main()
{   int n;
    for(int i=1; i<=4; i++)
    {   
        n=i;
        for(int j=1; j<=i; j++)  //can write (;j++, n++) as well
        {
            printf("%d",n);
            n++;
        }
        printf("\n");
    }
}