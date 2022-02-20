#include<stdio.h>
#include<string.h>
union employee
{
      //  char name;
      char name[100];
        int id;
        float salary;
};
int main()
{
        union employee hr;
        union employee *ptr=&hr;
//union employee
  //      ptr->name="srinu";///it  is error coming
      //  ptr->name='s';//it coming single quote word
   

	strcpy(ptr->name,"srinu");
   	printf("\n%s\n",ptr->name);
        //printf("\n%c\n",ptr->name);

        ptr->id=123;
        printf("\n%d\n",ptr->id);

        ptr->salary=350000.0;
        printf("\n%f\n",ptr->salary);
        return 0;

}

