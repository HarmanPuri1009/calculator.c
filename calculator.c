#include<stdio.h>
int main(){
    int a,b,c,ch;
    printf("1.Adding\n");
    printf("2.subtract\n");
    printf("3.multiplecation\n");
    printf("4.divide\n");
    printf("enter your choise(1-4):");
    scanf("%d",&ch);
    printf("enter 1st num:");
    scanf("%d",&a);
    printf("enter 2nd num:");
    scanf("%d",&b);
    if(ch==1){
        c=a+b;
        printf("%d sum = %d ",c);
    }
    else if(ch==2){
        c=a-b;
        printf("sub = %d ",c);
    }
    else if(ch==3){
        c=a*b;
        printf("multiple = %d",c);
    }
    else if(ch==4){
        c=a/b;
        printf("division = %d ",c);
    }

}
