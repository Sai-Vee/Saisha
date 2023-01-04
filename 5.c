//E
//DE
//CDE
//BCDE
//ABCDE
#include<stdio.h>
void main()
{
    for(int i='E'; i>='A'; i--)
    {
        for(int j=i; j<='E'; j++)
        printf("%c", j);
        printf("\n");
    }
}