//����z={(8+6i)(4+3i)}/{(8+6i)+(4+3i)}
#include "��ͷ.h"

int main() {
	float realpart, imagpart;
	Complex A, B, C;
	char F;
	C.imagpart = 0, C.realpart = 0;//C��ʼ��
	printf("�������븴����ʵ�����鲿\n");
	scanf_s("%f %f %f %f", &A.realpart, &A.imagpart,&B.realpart,&B.imagpart);
	assign(&A, A.realpart, A.imagpart);//A��ֵ
	printf("%f %f i", A.realpart, A.imagpart);
	assign(&B, B.realpart, B.imagpart);//B��ֵ
	printf("ѡ����Ҫ���еļ���\n");
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