// DOUTTT  //// char string is not coming exact output it's coming garbage values 
// //it's coming the char single quotes 

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
	hr.name=="srinu";
	printf("%s\n",hr.name);
	hr.id=1234;
	printf("%d\n",hr.id);
	hr.salary=35.8;
	printf("%f\n",hr.salary);
	return 0;
}
	
