//   1
//  232
// 34543
//4567654
//Pattern for N = 4
#include<stdio.h>
void main()
{ int p;
    for(int i=1; i<5; i++)
    {
        for(int s=4; s>i; s--)
        printf(" ");
        p=i;
        for(int j=i; j>=1; j--, p++)
        printf("%d", p);
        p=p-2;
        for(int k=2; k<=i; k++, p--)
        printf("%d", p);
        printf("\n");
    }
}