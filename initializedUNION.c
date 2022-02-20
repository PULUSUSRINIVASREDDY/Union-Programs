#include<stdio.h>

union employee
{
  
  	char name[100];
        int id;
        float salary;
//	char name[100];
};

int main()
{
        union employee hr={"srinu",1234,3.0000};


       


	printf("\n%s\n",hr.name);
       // printf("\nenter the name\n");
       // scanf("\n%s",hr.name);
        printf("%d\n",hr.id);
       // scanf("\n%d",&hr.id);
        printf("%f\n",hr.salary);
       // scanf("%f",&hr.salary);
     // printf("%c\n",hr.name);
        return 0;
}
