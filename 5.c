//Find weekday of given date
#include <stdio.h> 
#include <string.h> 
void main() 
{ 
 int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
 char week[7][10] ;
 int date, mon, year, i, r, s = 0 ; 
 strcpy(week[0], "Monday") ; 
 strcpy(week[1], "Tueday") ; 
 strcpy(week[2], "Wednesday") ; 
 strcpy(week[3], "Thursday") ; 
 strcpy(week[4], "Friday") ; 
 strcpy(week[5], "Saturday") ; 
 strcpy(week[6], "Sunday") ; 
 printf("Enter a valid date (dd/mm/yyyy) : ") ; 
 scanf("%d / %d / %d", &date, &mon, &year) ; 
 if( (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)) ) 
  month[1] = 29 ; 
 for(i = 0 ; i < mon - 1 ; i++) 
  s = s + month[i] ; 
 s = s + (date + year + (year / 4) - 2) ; 
 s = s % 7; 
 printf("\nThe day is : %s", week[s]) ;
}