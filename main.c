/// @file main.c
#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"
#include "test_calculator.h"

/**
    *Main entry point of the program

    */

int main()
{
    /*

    int iRetValue = 0;
    //Declaration of function pointer
    int (*pfAddTwoNumber)(int,int) = NULL;
    //initialize the function pointer
    pfAddTwoNumber = add;
    pfSubTwoNumber= sub;
    //Calling the function using the function pointer
    iRetValue = (*pfAddTwoNumber)(10,20);
    //display addition of two number
    printf("\n\nAddition of two number = %d\n\n",iRetValue);

    */

    /* Calling test main*/
    	test_main();
    return 0;
}
