# README for math.c

Ryan E. Drexel

	Created 06 September 2017
	Updated 21 September 2017
 
Embedded Systems- Dr. Tang and Mr. T.

math.c is a C language function defined in math.h capable of executing integer math operations.

The function takes in three arguments-	two integers, num1 and num2, and a character, Operator.
The function returns an integer known as "output"

These math operations are tabelled below. The math.c function uses a switch statement to assign
the proper value to "output" for different instances of "Operator"

	math operation	| Operator	| output
	________________|_______________|_____________
	addition	|	+	| num1 + num2
	________________|_______________|_____________
	subtraction	|	-	| num1 - num2
	________________|_______________|_____________
	multiplication	|	*	| num1 * num2
	________________|_______________|_____________
	division	|	/	| num1 / num2
	________________|_______________|_____________
	modulus		|	%	| num1 % num2
	________________|_______________|_____________

EXAMPLES:
	math(12, 3, '+') will return the value 15
	math(12, 3, '-') will return the value 9
	math(12, 3, '*') will return the value 36
	math(12, 3, '/') will return the value 4
	math(12, 3, '%') will return the value 0

