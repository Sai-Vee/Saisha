//Pattern for N = 4
//1
//2 3
//3 4 5
//4 5 6 7
#include<stdio.h>
void main()
{   int n;
    for(int i=1; i<=4; i++)
    {   
        n=i;
        for(int j=1; j<=i; j++)  //can write (;j++, n++) as well
        {
            printf("%d  ",n);
            n++;
        }
        printf("\n");
    }
}