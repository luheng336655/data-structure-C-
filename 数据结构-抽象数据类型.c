//���ݽṹ�����������ͣ�����Բ���area���ܳ�peri
#include <stdio.h>
//�ṹ��
typedef struct circle {
	float r;
	float area;
	float peri;
}*Circle;
//��������
float area(Circle c);
float peri(Circle c);

//���
float area(Circle c) {
	c->area = 3.14 * c->r * c->r;
	return c->area;
}
//�ܳ�
float peri(Circle c) {
	c->peri = 2 * 3.14 * c->r;
	return c->peri;
}
void main()
{
	struct circle a;
	printf("����뾶��\n");
	scanf_s("%f", &a.r);
	printf("the aarea=%f\n", area(&a));
	printf("the peri=%f\n", peri(&a));
}