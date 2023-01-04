//1 2 3 4 5 6 5 4 3 2 1
//1 2 3 4 5   5 4 3 2 1
//1 2 3 4       4 3 2 1
//1 2 3           3 2 1
//1 2               2 1
//1                   1
#include<stdio.h>
int main()
{
  int i,j,k;
  for(i=6; i>=1; i--)
  {
    for(j=1; j<=6; j++)
    {
      if(j<=i)
        printf("%d ",j);
      else
        printf("  ");
    }
    for(j=5; j>=1; j--)
    {
      if(j<=i)
        printf("%d ",j);
      else
        printf("  ");
    } 
    printf("\n");
  }
}  