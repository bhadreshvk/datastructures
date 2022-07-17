#include<stdio.h>
#include<string.h>
int main(){
    struct employee{
     int code;
     float salary;
     char name[10];
       
    };
    struct employee e1;
    e1.code=1;
    e1.salary=150;
    strcpy(e1.name,"raju");

    struct employee a ={100,200,"Harry"};
    struct employee *b;
    b=&a;

  
 printf("code %d \n",e1.code);
 printf("Salary: %f \n",e1.salary);
 printf("Name: %s \n",e1.name);
 printf("code %d \n",a.code);
 printf("Salary: %f \n",a.salary);
 printf("Name: %s \n",a.name);
 (*b).salary=500;
 printf("Salary: %f \n",a.salary);
b->salary=5000;
 printf("Salary: %f \n",a.salary);
}