//A
//BC
//CDE
//DEFG
#include<stdio.h>
void main()
{   int n='A';
    for(int i='A'; i<='D'; i++)
    {   
        n=i;
        for(int j='A'; j<=i; j++)  //can write (;j++, n++) as well
        {
            printf("%c",n);
            n++;
        }
        printf("\n");
    }
}