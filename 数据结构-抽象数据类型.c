//数据结构抽象数据类型：计算圆面积area、周长peri
#include <stdio.h>
//结构体
typedef struct circle {
	float r;
	float area;
	float peri;
}*Circle;
//函数声明
float area(Circle c);
float peri(Circle c);

//面积
float area(Circle c) {
	c->area = 3.14 * c->r * c->r;
	return c->area;
}
//周长
float peri(Circle c) {
	c->peri = 2 * 3.14 * c->r;
	return c->peri;
}
void main()
{
	struct circle a;
	printf("输入半径：\n");
	scanf_s("%f", &a.r);
	printf("the aarea=%f\n", area(&a));
	printf("the peri=%f\n", peri(&a));
}