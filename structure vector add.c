#include<stdio.h>
#include<string.h>
typedef struct vector{
     int x;
     int y;
    }v;
int main(){
    
v v1,v2;
printf("Enter x,y value of v1");
scanf("%d%d",&v1.x,&v1.y);
printf("Enter x,y value of v2");
scanf("%d%d",&v2.x,&v2.y);
vectoradd(v1,v2);
}

void vectoradd (struct vector v3,struct vector v4){
    int tempx,tempy;
    tempx=v3.x+v4.y;
    tempy=v4.x+v4.y;
    
    printf("%d %d",tempx,tempy);

}
