#include<stdio.h>
#include<string.h>
union employee
{
      
      char name[100];
        int id;
        float salary;
};

void func(union employee *ptr);
int main()
{
        union employee hr;
        union employee *ptr=&hr;
        strcpy(ptr->name,"srinu");
        func(&hr);
	ptr->id=123;
       // func(&hr);
        ptr->salary=3566.66;
        //func(&hr);
       
}
void func(union employee *ptr)

{

	printf("\n%s\n",ptr->name);
	printf("\n%d\n",ptr->id);
        printf("\n%f\n",ptr->salary);
}
