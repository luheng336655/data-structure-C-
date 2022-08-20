#include "标头.h"
//函数体
void assign(Complex* A, float real, float imag) { //赋值
	A->realpart = real;
	A->imagpart = imag;
}

void add(Complex* C, Complex A, Complex B) { //赋值
	C->realpart = A.realpart + B.realpart;
	C->imagpart = A.imagpart + B.imagpart;
}

int minus(Complex* C, Complex A, Complex B) {
	C->realpart = A.realpart - B.realpart;
	C->imagpart = A.imagpart - B.imagpart;
	return C;
}

int multiply(Complex* C, Complex A, Complex B) {
	C->realpart = (A.realpart * B.realpart) - (A.imagpart * B.imagpart);
	C->imagpart = (A.imagpart * B.realpart) - (A.realpart * B.imagpart);
	return C;
}

int divide(Complex* C, Complex A, Complex B) {
	C->realpart = ((A.realpart * B.realpart) + (A.imagpart * B.imagpart)) / ((B.realpart * B.realpart) + (B.imagpart * B.imagpart));
	C->imagpart = ((A.imagpart * B.realpart) - (A.realpart * B.imagpart)) / ((B.realpart * B.realpart) + (B.imagpart * B.imagpart));
	return C;
}