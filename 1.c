//Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -                            totalSalary = basic + hra + da + allow – pf. where : hra = 20% of basic, da = 50% of basic, allow = 1700 if grade = ‘A’, allow = 1500 if grade = ‘B’, allow = 1300 if grade = ‘C' or any other character, pf = 11% of basic. Round off the total salary and then print the integral part only.
#include<stdio.h>
void main()
{
    int bs, a, ts;
    float hra, da, pf;
    char g;
    printf("Enter the basic salary:");
    scanf("%d", &bs);
    printf("Enter the grade(uppercase only):");
    scanf("%c", &g);
    hra=0.2*bs; da=0.5*bs; pf=0.11*bs;
    switch(g)
    {
    case 'A':
    { 
        a=1700;
        ts=bs+hra+da+a-pf;
        printf("The total salary:", ts);
        break;
    }
    case 'B':
    { 
        a=1500;
        ts=bs+hra+da+a-pf;
        printf("The total salary:", ts);
        break;
    }
    case 'C':
    { 
        a=1300;
        ts=bs+hra+da+a-pf;
        printf("The total salary:", ts);
        break;
    }
    default:
    { 
        printf("Invalid Input", ts);
        break;
    }
    }
}