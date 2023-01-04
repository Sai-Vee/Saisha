//https://practice.geeksforgeeks.org/problems/decode-the-pattern/0/
#include<stdio.h>
void print_upper(int n)
{
int i,j;
 for(i=n;i>=1;i--)
 {
  for(j=n;j>i;j--)
   printf("%d",j);
  for(j=2*i-1;j>0;j--)
   printf("%d",i);
  for(j=i;j<n;j++)
   printf("%d",j+1);
  printf("\n");
 }
}
void print_lower(int n)
{
 int i,j;
 for(i=2;i<=n;i++)
 {
  for(j=n;j>i;j--)
   printf("%d",j);
  for(j=2*i-1;j>0;j--)
   printf("%d",i);
  for(j=i;j<n;j++)
   printf("%d",j+1);
  printf("\n");
 }
}
int main()
{
 int n;
 printf("Enter n:");
 scanf("%d",&n);
 print_upper(n);
 print_lower(n);
}
