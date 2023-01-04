//check whether an alphabet entered by the user is a vowel or a consonant.
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("\nIt's a vowel");
    else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        printf("\nIt's a owel");
    else
        printf("\nIt's a consonant");
}