#include<stdio.h>
void mian(){
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("Enter coeff: /n");
            scanf("%d",&a[i][j]);
            printf("Enter exp:/n");
            scanf("%d",&a[j][i]);
        }
    }
    for(int i=0;i<5;i++){
            
            printf("%d",a[i]);
        }
        printf("%d");
    for(int j=0;j<5;j++){
        printf("%d",a[j]);
    }

    

}