	#define _CRT_SECURE_NO_WARNINGS
	#include <stdio.h>
	#include <math.h>

	int main(void)
	{
		float valueOne, valueTwo, answer;
		char operator;

		printf("Enter calculation:\n\n");
		scanf("%f %c %f", &valueOne, &operator, &valueTwo);

		switch (operator)
		{
		case '/': answer = valueOne / valueTwo; break;
		case '*': answer = valueOne * valueTwo; break;
		case '+': answer = valueOne + valueTwo; break;
		case '-': answer = valueOne - valueTwo; break;
		case '^': answer = pow(valueOne, valueTwo); break;
		default: printf("Error"); break;
		}

		printf("%.9g%c%.9g = %0.6g\n\n", valueOne, operator,valueTwo, answer);
		return 0;
	}