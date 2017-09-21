//////////////////////
//					//
//	    math.c	    //
//	Ryan E. Drexel	//
//					//
//////////////////////

#include <stdio.h>
#include "math.h" //include math.h in "quotes" rather than <angles> since it is not a system header

int math(int num1, int num2, char Operator)
{   
	int output;

		/*	the character input "Operator" determines which math function
			will be performed on integer inputs num1 and num2. Valid values
			for Operator are: +,-,*,/,%.
		*/	

//the switch statement applied to Operator lets me execute different actions depending on the value of Operator

    switch (Operator) {

        case '+' :						//if Operator is "+"	-addition between num1 and num2 occurs and the sum is assigned
            output = num1 + num2;		//to output. The other math operations (subtract, multiply, divide, modulus) work the same way.

        case '-' :
            output = num1 - num2;
             
        case '*' :
            output = num1 * num2;
             
        case '/' :
            output = num1 / num2;
             
        case '%' :
            output = num1 % num2;
        
    }
         
    return output;		//the math function returns the value of int output
}

