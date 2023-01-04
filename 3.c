//A
//BB
//CCC
#include<stdio.h>
void main()
{
    for(int i='A'; i<='C'; i++)
    {
        for(int j='A'; j<=i; j++)
        printf("%c", i);
        printf("\n");
    }
}