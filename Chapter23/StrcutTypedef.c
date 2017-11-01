#include<stdio.h>

struct point
{
	int xpos;

	int ypos;
};
typedef struct point Point;

typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;

void main2()
{
	Point pos = { 10,20 };
	Person man = { "ÀÌ½Â±â","010-2222-3456", 22 };

	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name,man.phoneNum,man.age);

}
