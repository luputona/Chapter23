#include<stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
}Point;

typedef struct circle
{
	Point cen;
	double rad;
}Circle;

void ShowCirlceInfo(Circle *cptr)
{
	printf("[%d %d] \n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("radius : %g \n\n", cptr->rad);
}

void main10()
{
	Circle c1 = { {1}, 3.5f };
	Circle c2 = { 2,4, 3.9f };

	ShowCirlceInfo(&c1);
	ShowCirlceInfo(&c2);

}