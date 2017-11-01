#include<stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void main7()
{
	Point pos1 = { 1,2 };
	Point pos2;
	pos2 = pos1; //구조체 변수간 대입연산의 결과로 멤버 대 멤버 복사가 이루워진다 

	printf("크기 : %d \n", sizeof(pos1));
	printf("[%d, %d] \n", pos1.xpos,pos1.ypos);
	printf("크기 : %d \n", sizeof(pos2));
	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);
}