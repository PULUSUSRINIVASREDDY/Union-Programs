#include<stdio.h>
#pragma pack(0);
union employee
{
        char a;
	char b[8]
	char nmae1[10];

	double e;

	int id;
	float salary;
};
int main()
{
	printf("\n %d\n",sizeof(union employee));
}
