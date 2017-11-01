#include<stdio.h>

typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;

void ShowPersonInfo(Person man)
{
	printf("name : %s \n",man.name);
	printf("phone : %s \n", man.phoneNum);
	printf("age : %d \n", man.age);
}

Person ReadPersonInfo()
{
	Person man;
	printf("name? ");
	scanf_s("%s", man.name, sizeof(man.name));
	printf("phone? ");
	scanf_s("%s", man.phoneNum, sizeof(man.phoneNum));
	printf("age? ");
	scanf_s("%d", &man.age);

	return man;
}

void main4()
{
	Person man = ReadPersonInfo();
	ShowPersonInfo(man);
}