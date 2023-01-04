//Write a C program to read temperature in centigrade and display a suitable message according to temperature state below
#include<stdio.h>
void main()
{
    int t;
    printf("Enter the temperature in centigrade:");
    scanf("%d",&t);
    if(t<0)
      printf("Freezing Weather."); 
    if(t>=0 && t<10)
      printf("Very Cold Weather.");
    if(t>=10 && t<20)
      printf("Cold Weather.");
    if(t>=20 && t<30)
      printf("Normal in Temperature.");
    if(t>=30 && t<40)
      printf("It's Hot.");
    if(t>=40)
      printf("It's Very Hot.");
}