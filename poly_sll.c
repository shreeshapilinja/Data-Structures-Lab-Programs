#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
    int coeff;
    int expon;
    struct node *link;
};
typedef struct node *NODE;
NODE getnode()//To allocate memory for the nodes
{
    NODE x;
    x = (NODE)malloc(sizeof(struct node));
    return x;
}
NODE attach(int coeff, int expon, NODE head) //attach nodes at the end whenever required
{
    NODE temp,cur;
    temp = getnode(); //new node
    temp->coeff=coeff;
    temp->expon=expon;
    cur = head->link; //second node
    while(cur->link != head) // to reach last node
        cur = cur->link;
    cur->link=temp; //cur=last node now, so temp is attached at end
    temp->link=head; //make it circular by connecting to head
    return head; //return head pointer to callin g function
}
NODE read_poly(NODE head)
{
    int i = 1, coeff, expon;
    printf("\nEnter the coefficient as -999 to end the polynomial");
    while(1)
    {
        printf("\nEnter the %d term: n",i++);
        printf("\n\tCoeff = ");
        scanf("%d",&coeff);
        if(coeff == -999)
            break;
        printf("\n\tPow x = ");
        scanf("%d",&expon);
        head = attach(coeff,expon,head);
    }
    return head;
}
NODE poly_add(NODE head1, NODE head2, NODE head3)
{
    NODE a,b;int coeff;a = head1->link;       //first node=header node, so actual polynomial starts from next node
    b = head2->link;
    while(a != head1 && b != head2)    //till we reach header node again
    {
        if(a->expon == b->expon)   //compare exponent of both poly
        {
            coeff = a->coeff + b->coeff;
            if(coeff != 0)
                head3 = attach(coeff, a->expon, head3);
            a = a->link;               //forward both pointers
            b = b->link;
        }
        else if(a->expon > b->expon)              //copy a's node to result
        {
            head3 = attach(a->coeff, a->expon, head3);
            a = a->link;
        }
        else
        {
            head3 = attach(b->coeff, b->expon, head3);   //copy b's node 
            b = b->link;
        }
    }
    while(a != head1)         //attach remaining trems of poly "a"
    {
        head3 = attach(a->coeff, a->expon, head3);
        a = a->link;
    }
    while(b != head2)       //attach remaining terms of poly "b"
    {
        head3 = attach(b->coeff, b->expon, head3);
        b = b->link;
    }
    return head3;        //return resultant polynomial
    }
int eval(NODE head)
{
    NODE p;
    int x,ans=0;
    printf("\n\nEnter the value of x=");
    scanf("%d",&x);
    p=head->link;
    do
    {
        ans=ans+p->coeff*pow(x,p->expon);
        p=p->link;
    }
    while(p!=head->link);
    return(ans);
}
void display(NODE head)
{
    NODE temp;
    if(head->link == head)
    {
        printf("\nPolynomial does not exist");
        return;
    }
    temp = head->link;
    while(temp != head)
    {
        printf("%dx^%d",temp->coeff, temp->expon);
        temp = temp->link;
        if(temp != head)
            printf(" + ");
    }
}
void main()
{
    int res,ch;
    char ans;
    NODE head1, head2, head3, head4;
    head1 = getnode();
    head2 = getnode();
    head3 = getnode();
    head4=getnode();
    head1->link=head1;
    head2->link=head2;
    head3->link=head3;
    head4->link=head4;
    while(1)
    {
        printf("\n-------------------<<<  MENU  >>>-----------------");
        printf("\n\tPolynomial Operations :");
        printf("\n1.Create and Add");
        printf("\n2.Evaluate");
        printf("\n3.Exit");
        printf("\n---------------------------------------------------");
        printf("\nEnter your choice==>");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
                printf("\nEnter the first polynomial \n");
                head1 = read_poly(head1);
                printf("\nPolynomial 1:\t");
                display(head1);
                printf("\nEnter the second polynomial \n");
                head2 = read_poly(head2);
                printf("\nPolynomial 2:\t");
                display(head2);
                head3 = poly_add(head1, head2, head3);
                printf("\nResultant Polynomial after addition:\t");
                display(head3);
                break;
            case 2 :
                printf("\nEnter the  polynomial for evaluation\n");
                head4 = read_poly(head4);
                display(head4);
                res=eval(head4);
                printf("\nResult of Polynomial after evaluation =%d\t",res);
                break;
            case 3 :  
                exit(0);
                break;
            default :  printf("\n invalid choice");
                break;
        }
    }
}