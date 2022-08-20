#include "��ͷ.h"
//������
void assign(Complex* A, float real, float imag) { //��ֵ
	A->realpart = real;
	A->imagpart = imag;
}

void add(Complex* C, Complex A, Complex B) { //��ֵ
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