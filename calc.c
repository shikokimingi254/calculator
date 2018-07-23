#include<stdio.h>
#include<stdlib.h>

#include "functions.h"
/*
This is the main method
It's the entry point of our program
*/
int main(int argc, char* argv[]){
	int argv1, argv2;
	printf("Calculator\n\n");
	printf("number of arguments passed: %d\n", argc);
	printf("first argument: %s\n", argv[0]);
	if(argc>1){
		if(argc>=3){
		argv1 = atoi(argv[1]);
		argv2 = atoi(argv[2]);
		printf("The sum of argv[1] and argv[2]: %d\n", add(argv1, argv2));
		}
	}
	return 0;

	//function declaration
    int add(int a, int b);
    int subtract(int a, int b);
    float divide(int a, int b);
    int multiply(int a, int b);
    #include "functions.h"

    //a function implementation
    int add(int a, int b){
    	return a+b;
    }
    int subtract(int a, int b){
    	return a-b;
    }
    int multiply(int a, int b){
    	return a*b;
    }
    float divide(int a, int b){
    	return a/b;
    }
}*/
// Calculator  using C code
