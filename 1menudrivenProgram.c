//menu driven Program
#include<stdio.h>
#include<stdlib.h>
int a[20];  //Array declaration
int n,elem,i,pos;
/*Function Prototype*/
void create();
int display();
void insert();
int delete();
void main()
{
    int choice;
    printf("\n\n--------MENU-----------\n");
    printf("1.CREATE\n");
    printf("2.DISPLAY\n");
    printf("3.INSERT\n");
    printf("4.DELETE\n");
    printf("5.EXIT\n");
    printf("-----------------------");
    while(1)
    {
        printf("\nENTER YOUR CHOICE:\t");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: create();
                    break;
            case 2: display();
                    break;
            case 3: insert();
                    break;
            case 4: delete();
                    break;
            case 5: exit(0);
            default: printf("\nInvalid choice:\n");
                    break;
        }
    }
}
// a. Creating an Array of N Integer Elements
void create()
{
    printf("\nEnter the size of the array elements:\t");
    scanf("%d",&n);
    printf("\nEnter the elements for the array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
//b. Display of Array Elements with Suitable Headings
int display()
{
    if(n==0)
    {
        printf("\tArray is empty;no elements to display\n");
        return 0;
    }
    printf("\nThe array elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
//c. Inserting an Element (ELEM) at a given valid Position (POS)
void insert()
{
    printf("\nEnter the position for the new element:\t");
    scanf("%d",&pos);
    if(pos<=n)
    {
        printf("\nEnter the element to be inserted :\t");
        scanf("%d",&elem);
        for(i=n-1;i>=pos;i--)
            a[i+1]=a[i];
        a[pos]=elem;
        n=n+1;
        display();
    }
    else
        printf("Invalid Position");
}
//d. Deleting an Element at a given valid Position(POS)
int delete()
{
    if(n==0)
    {
        printf("\tArray is empty;no elements to delete\n");
        return 0;
    }        
    printf("\nEnter the position of the element to be deleted:\t");
    scanf("%d",&pos);
    if(pos<=n-1)
    {
        elem=a[pos];
        printf("\nThe deleted element is =%d",elem);
        for(i=pos;i<n-1;i++)
            a[i]=a[i+1];
        n=n-1;
        display();
    }
    else
        printf("Invalid Position");
}