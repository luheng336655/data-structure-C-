#pragma once

#include <stdio.h>
#include <math.h>
typedef struct Complex{   //���帴��
	float realpart;
	float imagpart;
}Complex;

//��������
void assign(Complex* A, float real, float imag); //��ֵ
void add(Complex* A, Complex z1, Complex z2); //+
int minus(Complex* A, Complex z1, Complex z2); //-
int multiply(Complex* A, Complex z1, Complex z2); //*
int divide(Complex* A, Complex z1, Complex z2); //��