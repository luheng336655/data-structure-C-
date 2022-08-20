#pragma once

#include <stdio.h>
#include <math.h>
typedef struct Complex{   //定义复数
	float realpart;
	float imagpart;
}Complex;

//函数定义
void assign(Complex* A, float real, float imag); //赋值
void add(Complex* A, Complex z1, Complex z2); //+
int minus(Complex* A, Complex z1, Complex z2); //-
int multiply(Complex* A, Complex z1, Complex z2); //*
int divide(Complex* A, Complex z1, Complex z2); //除