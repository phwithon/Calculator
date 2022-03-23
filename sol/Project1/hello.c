	#define _CRT_SECURE_NO_WARNINGS
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <math.h>

	int main(void)
	{
		float valueOne;
		float valueTwo;
		char operator;
		float answer;

		printf("Enter calculation:\n\n");
		scanf("%f %c %f", &valueOne, &operator, &valueTwo);

		switch (operator)
		{
		case '/': answer = valueOne / valueTwo;
			break;
		case '*': answer = valueOne * valueTwo;
			break;
		case '+': answer = valueOne + valueTwo;
			break;
		case '-': answer = valueOne - valueTwo;
			break;
		case '^': answer = pow(valueOne, valueTwo); // °ÅµìÁ¦°ö
			break;
		default: 
			printf("Error");
			break;
		}

		printf("%.9g%c%.9g = %0.6g\n\n", valueOne, operator,valueTwo, answer);
		return 0;
	}