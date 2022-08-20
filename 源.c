//计算z={(8+6i)(4+3i)}/{(8+6i)+(4+3i)}
#include "标头.h"

int main() {
	float realpart, imagpart;
	Complex A, B, C;
	char F;
	C.imagpart = 0, C.realpart = 0;//C初始化
	printf("依次输入复数的实部及虚部\n");
	scanf_s("%f %f %f %f", &A.realpart, &A.imagpart,&B.realpart,&B.imagpart);
	assign(&A, A.realpart, A.imagpart);//A赋值
	printf("%f %f i", A.realpart, A.imagpart);
	assign(&B, B.realpart, B.imagpart);//B赋值
	printf("选择需要进行的计算\n");
	rewind(stdin);
	F = getchar();
	switch (F) {
	case '+':add(&C, A, B); break;
	case '-':minus(&C, A, B); break;
	case '*':multiply(&C, A, B); break;
	case '/':divide(&C, A, B); break;
	default:printf("errror!\n");
	}
	if (C.imagpart >= 0)
	{
		printf("%f +%fi\n", C.realpart, C.imagpart);
	}
	else
	{
		printf("%f %fi\n", C.realpart, C.imagpart);
	}
	return 0;
}