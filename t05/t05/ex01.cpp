#include <stdio.h>

int main() {
	
	// int : 32비트(4바이트), 정수
	float a, b;

	scanf("%f%f", &a, &b); // &: 포인터

	printf("%f + %f = %f\n", a, b, a + b);
	printf("%f - %f = %f\n", a, b, a - b);
	printf("%f * %f = %f\n", a, b, a * b);
	printf("%f / %f = %f\n", a, b, a / b);
	

	/*
	// float : 32비트(4바이트), 실수
	float a = 9.8;
	float b = 3.14;

	float hap = a + b;
	float cha = a - b;
	float gob = a * b;
	float mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gob);
	printf("%f / %f = %f\n", a, b, mok);


	// double : 64비트(8바이트), 실수
	double c = 9.8;
	double d = 3.14;

	double hap1 = c + d;
	double cha1 = c - d;
	double gob1 = c * d;
	double mok1 = c / d;

	printf("%f + %f = %f\n", c, d, hap1);
	printf("%f - %f = %f\n", c, d, cha1);
	printf("%f * %f = %f\n", c, d, gob1);
	printf("%f / %f = %f\n", c, d, mok1);
	*/
}