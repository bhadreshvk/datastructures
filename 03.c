#include<stdio.h>
#include<string.h>
int mian(){
    struct employee{
     int code;
     float salary;
     char name[10];
    };
       
    
     struct employee e1;
        e1.code=1;
     e1.salary=150;
     strcpy(e1.name,"raju");
  
     printf("code %d \n",e1.code);
     printf("Salary: %f \n",e1.salary);
       printf("Name: %s \n",e1.name);
}