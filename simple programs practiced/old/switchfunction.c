#include<stdio.h>
void main()
{
    int a,b,c,op;
    printf("enter the 1st number");
    scanf("%d",&a);
    printf("enter the 2nd number");
    scanf("%d",&b);
    printf("choose 1.addition\n2.subtract\n3.multiply\n4.divide\n");
    scanf("%d",&op);
    void add(int a,int b){
        c=a+b;
        printf("The sum is %d",c);
    }
    void sub(int a,int b){
        c=a-b;
        printf("The sum is %d",c);
    }
    void mul(int a,int b){
        c=a*b;
        printf("The sum is %d",c);
    }
    void divi(int a,int b){
        c=a/b;
        printf("The sum is %d",c);
    }
    switch(op){
        case 1:add(a,b);
              break;
        case 2:sub(a,b);
              break;
        case 3:mul(a,b);
              break;
        case 4:divi(a,b);
              break;
    }
}
