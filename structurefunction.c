#include<stdio.h>
#include<string.h>
struct employee{
     int code;
     float salary;
     char name[10];
     };
int main(){
    
     struct employee e1;
     

    
   printf("Enter code: ");
    scanf("%d",&e1.code);
    printf("Enter salary: ");
    scanf("%f",&e1.salary);
    printf("Enter name: ");
    scanf("%s",&e1.name);

    show(e1);



}

void show(struct employee a){

printf("code %d \n",a.code);
 printf("Salary: %f \n",a.salary);
 printf("Name: %s \n",a.name);
int update;
printf("\ninorder to update values press 1 ");
scanf("%d",&update);
if (update==1){
    updatestr(a);

}
}

int updatestr(struct employee b){
printf("Enter code: ");
scanf("%d",&b.code);
printf("Enter salary: ");
scanf("%f",&b.salary);
printf("Enter name: ");
scanf("%s",&b.name);
printf("\n Value updated");
show(b);

}
