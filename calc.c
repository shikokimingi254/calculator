
#include<stdio.h>
#include<stdlib.h>

#include "functions.h"
/*
This is the main method
It's the entry point of our program
*/
int main(int argc, char* argv[]){
	int a, b, choice;
	
while(&choice!=0)
{
	printf("\nCalculator\n\n");
	printf("1:Addition\n2:Substraction\n3:Multiplication\n4:Division\n0:exit\nSelect Action:\n");
	scanf("%d", &choice);

switch(choice){
    case 0:
        return 0;
        break;
    case 1:
        printf("Enter 1st number:\n");
        scanf("%d", &a);
        printf("Enter 2nd number:\n");
        scanf("%d", &b);
        printf("Your result is:%d", add(a,b));
        break;
    case 2:
        printf("Enter 1st number:\n");
        scanf("%d", &a);
        printf("Enter 2nd number:\n");
        scanf("%d", &b);
        printf("Your result is: %d ", subtract(a,b));
        break;
    case 3:
        printf("Enter 1st number:\n");
        scanf("%d", &a);
        printf("Enter 2nd number:\n");
        scanf("%d", &b);
        printf("Your result is: %d", multiply(a,b));
        break;
    case 4:
        printf("Enter 1st number:\n");
        scanf("%d", &a);
        printf("Enter 2nd number:\n");
        scanf("%d", &b);
        printf("Your result is: %.2f", divide(a,b));
        break;
    default:
        printf("That is not a valid choice.");
        break;
}
        }
        }

calc.c
Displaying calc.c.