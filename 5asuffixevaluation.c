/*SUFFIX EXPRESSION EVALUATION*/
#include<ctype.h>
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
float stack[20];
int top=-1;
float eval_postfix(char[]); 
void push(float); 
float pop(); 
void main()
{
    char postfix[20];
    float result;
    printf("enter postfix expr\n");
    scanf("%s", postfix);
    result=eval_postfix(postfix);
    printf("The result = %f\n",result);
}
float eval_postfix(char postfix[])
{
    int i=0,k;
    char ch,op1,op2;
    float res;
    while(postfix[i]!='\0') 
    {
        ch=postfix[i];
        if(isdigit(ch)) 
        {
            k=ch-'0';
            push(k);
        }
        else
        {
            op2=pop();
            op1=pop();
            switch(ch)
            {
                case '+':push(op1+op2);
                        break;
                case '-':push(op1-op2);
                        break;
                case '*':push(op1*op2);
                        break;
                case '/':push(op1/op2);
                        break;
                case '^':push(pow(op1,op2));
                        break;
                default :printf("illegal\n");
                        exit(0);
            }
        }
        i++;
    }
    res=pop();
    if(top!=-1)
    {
        printf("not a valid expression");
        exit(1);
    }
    return(res);
}
void push(float num)
{
    top++;
    stack[top]=num;
    return;
}
float pop()
{
    float num;
    if(top == -1)
    {
        printf("not a valid");
        exit(0);
    }
    else
    {
        num=stack[top];
        top--;
        return(num);
    }
}
