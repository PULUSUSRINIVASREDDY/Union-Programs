#include<stdio.h>

union employee
{
	char name[10];
	int id;
	float salary;
};

int main()
{
	union employee hr;
	
	printf("\n enter the employee details\n");

	
	printf("\nenter the name\n");
	scanf("\n%s",hr.name);
	printf("\nenter the employee id\n");
	scanf("\n%d",&hr.id);
	printf("enter the employe salary\n");

	scanf("\n%f",&hr.salary);


	
//	printf("\nenter the name id and salary\n");
	//scanf("\n%c\n%d\n%f",&hr.name,&hr.id,&hr.salary);

	printf("%s",hr.name);
	printf("%d",hr.id);
	printf("%f",hr.salary);
return 0;
}
