/*design a program to take 3 input 
1st-- integer 
2nd-- float
3rd-- charecter
display size and address of each input variables */
#include<stdio.h>
void main(){
    int a,sa,sb,sc;
    float b;
    char c;
    sa=sizeof(a);
    sb=sizeof(b);
    sc=sizeof(c);
    printf("Enter the inputs as integer ,float , charecter\n");
    scanf("%d %f %c",&a,&b,&c);
    printf("size of integer is = %d\t\t address of integer is = %p\n",sa,&a);
    printf("size of float is = %d\t\t address of float is = %p\n",sb,&b);
    printf("size of charecter is = %d\t address of charecter is = %p\n",sc,&c);
}