#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

void ShowPosition1(Point pos)
{
	printf("[%d %d] \n", pos.xpos, pos.ypos);
}
Point GetcurrentPosition()
{
	Point cen;
	printf("Input current pos");
	scanf_s("%d %d", &cen.xpos, &cen.ypos);
}

void main3()
{
	Point curPos = GetcurrentPosition();
	ShowPosition1(curPos);
}