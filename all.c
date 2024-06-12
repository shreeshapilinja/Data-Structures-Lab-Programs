#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include<math.h>
#define MAX13 100
#define size4 50
int a12[20][20],q12[20],visited[20],reach[10],n12,i12,j12,f=0,r=-1,count12=0;
int a1[20];
int n1,elem1,i1,pos1;
char STR2[100],PAT2[100],REP2[100],ans2[100];
int i2,j2,c2,m2,k2,flag2=0;
int stack3[6],rev3[6];
int top3=-1,k3=0;
int size3;
char s4[size4];
int top4 = -1; 
float stack5a[20];
int top5a=-1;
float eval_postfix5a(char[]); 
void push5a(float); 
float pop5a(); 
void towers4(int, char, char, char);
#define SIZE7 5
char CQ7[SIZE7];
int front7=-1, rear7=-1;
int ch7;
void CQ_Insert7();
void CQ_Delet7();
void CQ_Display7();
int count8=0;
int create13(int);
void linear_prob(int[], int, int);
void display13 (int[]);
struct Enode9
{
    char ssn9[15];
    char name9[20];
    char dept9[5];
    char designation[10];
    int salary;
    long long int phno;
    struct Enode9 *left;
    struct Enode9 *right;
}*head=NULL;
struct BST
{
    int data11;
    struct BST *left11;
    struct BST *right11;
};
typedef struct BST NODE11;
NODE11 *node11;
typedef struct node10
{
    int expo10,coef10;
    struct node10 *next10;
}node10;
node10 *tail10;
node10 *insert10(node10 *,int,int);
node10 *create10();
node10 *add10(node10 *p1,node10 *p2);
int eval10(node10 *p1);
void display10(node10 *head10);
node10 *insert10(node10*head10,int expo101,int coef101)
{
    node10 *p,*q,*d;
    p=(node10 *)malloc(sizeof(node10));
    p->expo10=expo101;
    p->coef10=coef101;
    p->next10=NULL;
    if(head10==NULL)
    {
        head10=p;
        head10->next10=head10;
        tail10=head10;
        return(head10);
    }
    else
    {
        q=head10;
        while(q->expo10!=expo101&&q->next10!=head10)
            q=q->next10;
    }
    if(expo101==q->expo10)
    {
        q->coef10=q->coef10+coef101;
        return(head10);
    }
    if(expo101>head10->expo10)
    {
        p->next10=head10;
        tail10->next10=p;
        head10=p;
        return(head10);
    }
    q=head10;
    while(q->next10!=head10&&expo101<q->expo10)
    {
        d=q;
        q=q->next10;
    }
    if(q->expo10<expo101)
    {
        p->next10=q;
        d->next10=p;
    }
    else
    {
        p->next10=head10;
        tail10->next10=p;
        tail10=p;
    }
    return(head10);
}

void bfs(int v)
{
    for(i12=1;i12<=n12;i12++)
        if(a12[v][i12] && !visited[i12])
            q12[++r]=i12;
    if(f<=r)
    {
        visited[q12[f]]=1;
        bfs(q12[f++]);
    }
}
void dfs(int v)
{
    int i12;
    reach[v]=1;
    for(i12=1;i12<=n12;i12++)
    {
        if(a12[v][i12] && !reach[i12])
        {
            printf("\n%d->%d",v,i12);
            count12++;
            dfs(i12);
        }
    }
}
node10 *create10()
{
    int n,i,expo101,coef101;
    node10 *head10=NULL;
    printf("\n\nEnter no of terms of polynomial==>");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n\nEnter coef10 & expo10==>");
        scanf("%d%d",&coef101,&expo101);
        head10=insert10(head10,expo101,coef101);
    }
    return(head10);
}

node10 *add10(node10 *p1,node10 *p2)
{
    node10 *p;
    node10 *head10=NULL;
    printf("\n\n\nadd10ition of polynomial==>");
    p=p1->next10;
    do
    {
        head10=insert10(head10,p->expo10,p->coef10);
        p=p->next10;
    }while(p!=p1->next10);
    p=p2->next10;
    do
    {
        head10=insert10(head10,p->expo10,p->coef10);
        p=p->next10;
    }while(p!=p2->next10);
    return(head10);
}

int eval10(node10 *head10)
{
    node10 *p;
    int x,ans=0;
    printf("\n\nEnter the value of x=");
    scanf("%d",&x);
    p=head10->next10;
    do
    {
        ans=ans+p->coef10*pow(x,p->expo10);
        p=p->next10;
    }while(p!=head10->next10);
    return(ans);
}

void display10(node10 *head10)
{
    node10 *p,*q;
    int n=0;
    q=head10;
    p=head10;
    do
    {
        n++;
        q=q->next10;
    }while(q!=head10);
    printf("\n\n\tThe polynomial is==>");
    do
    {
        if(n-1)
        {
            printf("%dx^(%d) + ",p->coef10,p->expo10);
            p=p->next10;
        }
        else
        {
            printf(" %dx^(%d)",p->coef10,p->expo10);
            p=p->next10;
        }
        n--;
    }while(p!=head10);
}
struct Enode9 *tail,*temp2,*temp2;
void create9(char [],char [],char [],char [],int ,long long int);
void ins_beg9(char [],char [],char [],char [],int ,long long int);
void ins_end9(char [],char [],char [],char [],int ,long long int);
void del_beg9();
void del_end9();
void display9();
int count9=0;
void nine()
{
    int choice;
    char s[15],n[20],dpt[5],des[10];
    int sal;
    long long int p;
    printf("1.create\n2.display\n3.Insert at beginning\n4.Insert at End\n5.Delete at beginning\n6.Delete at End\n7.Exit\n");
    while(1)
    {
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter the required --> data Emp no,name,dept,Desig,sal,phone\n");
            scanf("%s%s%s%s%d%lld",s,n,dpt,des,&sal,&p);
            create9(s,n,dpt,des,sal,p);
            break;
            case 2: display9();
            break;
            case 3:printf("Enter the required --> data Emp no,name,dept,Desig,sal,phone\n");
            scanf("%s%s%s%s%d%lld",s,n,dpt,des,&sal,&p);
            ins_beg9(s,n,dpt,des,sal,p);
            break;
            case 4: printf("Enter the required --> data Emp no,name,dept,Desig,sal,phone\n");
            scanf("%s%s%s%s%d%lld",s,n,dpt,des,&sal,&p);
            ins_end9(s,n,dpt,des,sal,p);
            break;
            case 5: del_beg9();
            break;
            case 6: del_end9();
            break;
            case 7: exit(0);
        }
    }
}
void create9(char s[15],char n[20],char dpt[5],char des[10],int sal,long long int p)
{
    if(head==NULL)
    {
        head=(struct Enode9 *)malloc(1*sizeof(struct Enode9));
        strcpy(head->ssn9,s);
        strcpy(head->name9,n);
        strcpy(head->dept9,dpt);
        strcpy(head->designation,des);
        head->salary=sal;
        head->phno=p;
        head->left=NULL;
        head->right=NULL;
        tail=head;
        count9++;
    }
    else
    {
        temp2=(struct Enode9 *)malloc(1*sizeof(struct Enode9));
        strcpy(temp2->ssn9,s);
        strcpy(temp2->name9,n);
        strcpy(temp2->dept9,dpt);
        strcpy(temp2->designation,des);
        temp2->salary=sal;
        temp2->phno=p;
        tail->right=temp2;
        temp2->right=NULL;
        temp2->left=tail;
        tail=temp2;
        count9++;
    }
}
void display9()
{
    temp2=head;
    if(head==NULL)
    {
        printf("empty list\n");
        return;
    }
    printf("Employee Details ......\n");
    while(temp2!=NULL)
    {
        printf("------------------\n");
        printf("ssn:%s\nname:%s\ndept:%s\nDESIGN:%s\nSALARY:%d\nPHN:%lld\n",temp2->ssn9,temp2->name9,temp2->dept9,temp2->designation,temp2->salary,temp2->phno);
        printf("------------------\n");
        temp2=temp2->right;
    }
    printf("Number of nodes=%d\n",count9);
}
void ins_beg9(char s[15],char n[20],char dpt[5],char des[10],int sal,long long int p)
{
    if(head!=NULL)
    {
        temp2=(struct Enode9 *)malloc(1*sizeof(struct Enode9));
        strcpy(temp2->ssn9,s);
        strcpy(temp2->name9,n);
        strcpy(temp2->dept9,dpt);
        strcpy(temp2->designation,des);
        temp2->salary=sal;
        temp2->phno=p;
        temp2->right=head;
        head->left=temp2;
        head=temp2;
        temp2->left=NULL;
        count9++;
    }
    else
    {
        head=(struct Enode9 *)malloc(1*sizeof(struct Enode9));
        strcpy(head->ssn9,s);
        strcpy(head->name9,n);
        strcpy(head->dept9,dpt);
        strcpy(head->designation,des);
        head->salary=sal;
        head->phno=p;
        head->left=NULL;
        head->right=NULL;
        tail=head;
        count9++;
    }
}
void ins_end9(char s[15],char n[20],char dpt[5],char des[10],int sal,long long int p)
{
    if(head!=NULL)
    {
        temp2=(struct Enode9 *)malloc(1*sizeof(struct Enode9));
        strcpy(temp2->ssn9,s);
        strcpy(temp2->name9,n);
        strcpy(temp2->dept9,dpt);
        strcpy(temp2->designation,des);
        temp2->salary=sal;
        temp2->phno=p;
        tail->right=temp2;
        temp2->left=tail;
        temp2->right=NULL;
        tail=temp2;
        count9++;
    }
    else
    {
        head=(struct Enode9 *)malloc(1*sizeof(struct Enode9));
        strcpy(head->ssn9,s);
        strcpy(head->name9,n);
        strcpy(head->dept9,dpt);
        strcpy(head->designation,des);
        head->salary=sal;
        head->phno=p;
        head->left=NULL;
        head->right=NULL;
        tail=head;
        count9++;
    }
}
void thirteen()
{
        int a[MAX13],num,key,i;
        int ans=1;
        for (i=0;i<MAX13;i++)
        {
                a[i] = -1;
        }
        do
        {
                printf("\n Enter the data\t");
                scanf("%d", &num);
                key=create13(num);
                linear_prob(a,key,num);
                printf("\n Do you wish to continue ? (1/0) ");
                scanf("%d",&ans);
        }while(ans);
        display13(a);
}
int create13(int num)
{
        int key;
        key=num%100;
        return key;
}
void linear_prob(int a[MAX13], int key, int num)
{
        int flag, i, count=0;
        flag=0;
        if(a[key]== -1)
        {
                a[key] = num;
        }
        else
        {
                printf("\nCollision Detected...!!!\n");
                i=0;
                while(i<MAX13) 
                {
                        if (a[i]!= -1)
                                count++;
                        i++;
                }
                printf("Collision avoided successfully using LINEAR PROBING\n");
                if(count == MAX13)
                {
                        printf("\n Hash table is full");
                        display13(a);
                        exit(1);
                }
                for(i=key+1; i<MAX13; i++) 
                        if(a[i] == -1)
                        {
                                a[i] = num;
                                flag =1;
                                break;
                        }
                i=0;
                while((i<key) && (flag==0))
                {
                        if(a[i] == -1)
                        {
                                a[i] = num;
                                flag=1;
                                break;
                        }
                        i++;
                }
        }
}
void display13(int a[MAX13])
{
        int i,choice;
        printf("1.Display ALL\n 2.Filtered Display\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
                case 1:
                        printf("\n Complete Hash table is\n");
                        printf("KEY\tVALUE");
                        for(i=0; i<MAX13; i++)
                                printf("\n %d\t%d ", i, a[i]);
                        break;
                case 2:
                        printf("\n filtered Hash table is\n");
                        printf("KEY\tVALUE");
                        for(i=0; i<MAX13; i++)
                                if(a[i]!=-1)
                                {
                                        printf("\n %d\t%d ", i, a[i]);
                                        continue;
                                }
                        break;
        }
}

void del_beg9()
{
    if(head!=NULL)
    {
        temp2=head->right;
        if(temp2!=NULL) 
        {
            temp2->left=NULL;
            printf("deleted node is:\n");
            printf("-----------------------\n");
            printf("ssn:%s\nname:%s\ndept:%s\nDESIGN:%s\nSALARY:%d\nPHN:%lld\n",head->ssn9,head->name9,head->dept9,head->designation,head->salary,head->phno);
            printf("-----------------------\n");
            free(head);
            head=temp2;
        }
        else
        {
            printf("deleted node is:\n");
            printf("-----------------------\n");
            printf("ssn:%s\nname:%s\ndept:%s\nDESIGN:%s\nSALARY:%d\nPHN:%lld\n",head->ssn9,head->name9,head->dept9,head->designation,head->salary,head->phno);
            printf("-----------------------\n");
            free(head);
            head=NULL;
        }
        count9--;
    }
    else
        printf("List is empty\n");
}
void del_end9()
{
    if(head==NULL)
    {
        printf("empty list\n");
        return;
    }
    else
    {
        temp2=tail;
        if(head==tail)
        {
            printf("deleted node is:\n");
            printf("-----------------------\n");
            printf("ssn:%s\nname:%s\ndept:%s\nDESIGN:%s\nSALARY:%d\nPHN:%lld\n",tail->ssn9,tail->name9,tail->dept9,tail->designation,tail->salary,tail->phno);
            printf("-----------------------\n");
            head=tail=NULL;
            free(temp2);
            count9--;
        }
        else
        {
            printf("deleted node is:\n");
            printf("-----------------------\n");
            printf("ssn:%s\nname:%s\ndept:%s\nDESIGN:%s\nSALARY:%d\nPHN:%lld\n",tail->ssn9,tail->name9,tail->dept9,tail->designation,tail->salary,tail->phno);
            printf("-----------------------\n");
            temp2->left->right=NULL;;
            tail=temp2->left;
            free(temp2);
            count9--;
        }
    }
}
struct stud8
{
long long int ph8;
int sem8;
char name8[15],usn8[15],branch8[8];
struct stud8 *next8;
}*head8=NULL,*tail8=NULL,*temp=NULL,*temp1;
void create8(long long int n,int s,char na[20],char u[15],char b[5])
{
if(head8==NULL)
{
head8=(struct stud8*)malloc(1*sizeof(struct stud8));
head8->ph8=n;
head8->sem8=s;
strcpy(head8->name8,na);
strcpy(head8->usn8,u);
strcpy(head8->branch8,b);
head8->next8=NULL;
tail8=head8;
count8++;
}
else
{
temp=(struct stud8*)malloc(1*sizeof(struct stud8));
temp->ph8=n;
temp->sem8=s;
strcpy(temp->name8,na);
strcpy(temp->usn8,u);
strcpy(temp->branch8,b);
temp->next8=NULL;
tail8->next8=temp;
tail8=temp;
count8++;
}
}
void display8()
{
temp1=head8;
if(temp1==NULL)
{
printf("\nlist is empty\n");
}
else
{
printf("student detail8s are as follows:\n");
while(temp1!=NULL)
{
    printf("-----------------------\n");
printf("name:%s\nusn:%s\nBRANCH:%s\nsem:%d\nPHONE NO.:%lld\n",temp1->name8,temp1->usn8,temp1->branch8,temp1->sem8,temp1->ph8);
printf("-----------------------\n");
temp1=temp1->next8;
}
printf("no. of nodes=%d\n",count8);
}
}
void insert_head8(long long int n,int s,char na[15],char u[15],char b[8])
{
temp=(struct stud8*)malloc(1*sizeof(struct stud8));
temp->ph8=n;
temp->sem8=s;
strcpy(temp->name8,na);
strcpy(temp->usn8,u);
strcpy(temp->branch8,b);
temp->next8=head8;
head8=temp;
count8++;
}
void insert_tail8(long long int n,int s,char na[15],char u[15],char b[8])
{
temp=(struct stud8*)malloc(1*sizeof(struct stud8));
temp->ph8=n;
temp->sem8=s;
strcpy(temp->name8,na);
strcpy(temp->usn8,u);
strcpy(temp->branch8,b);
tail8->next8=temp;
temp->next8=NULL;
tail8=temp;
count8++;
}
void delete_head8()
{
temp1=head8;
if(temp1==NULL)
{
printf("list is empty\n");
}
else
{
head8=head8->next8;
printf("deleted node is:\n");
printf("-----------------------\n");
printf("name:%s\nusn:%s\nBRANCH:%s\nsem:%d\nPHONE NO.:%lld\n",temp1->name8,temp1->usn8,temp1->branch8,temp1->sem8,temp1->ph8);
printf("-----------------------\n");
free(temp1);
count8--;
}
}
void delete_tail8()
{
if(tail8==NULL)
{
printf("list is empty\n");
}
else if(head8==tail8)
{
printf("deleted node is:\n");
printf("-----------------------\n");
printf("name:%s\nusn:%s\nBRANCH:%s\nsem:%d\nPHONE NO.:%lld\n",tail8->name8,tail8->usn8,tail8->branch8,tail8->sem8,tail8->ph8);
printf("-----------------------\n");
free(head8);
tail8=head8=NULL;
count8--;
}
else
{
temp1=head8;
while(temp1->next8!=tail8)
{
temp1=temp1->next8;
}
printf("deleted node is:\n");
printf("-----------------------\n");
printf("name:%s\nusn:%s\nBRANCH:%s\nsem:%d\nPHONE NO.:%lld\n",tail8->name8,tail8->usn8,tail8->branch8,tail8->sem8,tail8->ph8);
printf("-----------------------\n");
free(tail8);
tail8=temp1;
tail8->next8=NULL;
count8--;
}
}
NODE11* createtree11(NODE11 *node11, int data11)
{
    if (node11 == NULL)
    {
        NODE11 *temp;
        temp= (NODE11*)malloc(sizeof(NODE11));
        temp->data11 = data11;
        temp->left11 = temp->right11 = NULL;
        return temp;
    }
    if (data11 < (node11->data11))
        node11->left11 = createtree11(node11->left11, data11);
    else if (data11 > node11->data11)
        node11 -> right11 = createtree11(node11->right11, data11);
    return node11;
}

NODE11* search11(NODE11 *node11, int data11)
{
    if(node11 == NULL)
        printf("\nElement not found");
    else if(data11 < node11->data11)
        node11->left11=search11(node11->left11, data11);
    else if(data11 > node11->data11)
        node11->right11=search11(node11->right11, data11);
    else
        printf("\nElement found is: %d", node11->data11);
    return node11;
}
void inorder11(NODE11 *node11)
{
    if(node11 != NULL)
    {
        inorder11(node11->left11);
        printf("%d\t", node11->data11);
        inorder11(node11->right11);
    }
}
void preorder11(NODE11 *node11)
{
    if(node11 != NULL)
    {
        printf("%d\t", node11->data11);
        preorder11(node11->left11);
        preorder11(node11->right11);
    }
}
void postorder11(NODE11 *node11)
{
    if(node11 != NULL)
    {
        postorder11(node11->left11);
        postorder11(node11->right11);
        printf("%d\t", node11->data11);
    }
}
NODE11* findMin(NODE11 *node11)
{
    if(node11==NULL)
        return NULL;
    if(node11->left11)
        return findMin(node11->left11);
    else
        return node11;
}
NODE11* del11(NODE11 *node11, int data11)
{
    NODE11 *temp;
    if(node11 == NULL)
        printf("\nElement not found");
    else if(data11 < node11->data11)
        node11->left11 = del11(node11->left11, data11);
    else if(data11 > node11->data11)
        node11->right11 = del11(node11->right11, data11);
    else
    {
        if(node11->right11 && node11->left11)
        {
            temp = findMin(node11->right11);
            node11 -> data11 = temp->data11;
            node11 -> right11 = del11(node11->right11,temp->data11);
        }
        else
        {
            temp = node11;
            if(node11->left11 == NULL)
            node11 = node11->right11;
            else if(node11->right11 == NULL)
            node11 = node11->left11;
            free(temp);
        }
    }
    return node11;
}
// a. Creating an Array of N Integer Elements
void create1()
{
    printf("\nEnter the size of the array elements:\t");
    scanf("%d",&n1);
    printf("\nEnter the elements for the array:\n");
    for(i1=0;i1<n1;i1++)
        scanf("%d",&a1[i1]);
}
//b. Display of Array Elements with Suitable Headings
int display1()
{
    if(n1==0)
    {
        printf("\tArray is empty;no elements to display\n");
        return 0;
    }
    printf("\nThe array elements are:\n");
    for(i1=0;i1<n1;i1++)
        printf("%d\t",a1[i1]);
        return 0;
}
//c. Inserting an Element (ELEM) at a given valid Position (POS)
void insert1()
{
    printf("\nEnter the position for the new element:\t");
    scanf("%d",&pos1);
    if(pos1<=n1)
    {
        printf("\nEnter the element to be inserted :\t");
        scanf("%d",&elem1);
        for(i1=n1-1;i1>=pos1;i1--)
            a1[i1+1]=a1[i1];
        a1[pos1]=elem1;
        n1=n1+1;
        display1();
    }
    else
        printf("Invalid Position");
}
//d. Deleting an Element at a given valid Position(POS)
int delete1()
{
    if(n1==0)
    {
        printf("\tArray is empty;no elements to delete\n");
        return 0;
    }        
    printf("\nEnter the position of the element to be deleted:\t");
    scanf("%d",&pos1);
    if(pos1<=n1-1)
    {
        elem1=a1[pos1];
        printf("\nThe deleted element is =%d",elem1);
        for(i1=pos1;i1<n1-1;i1++)
            a1[i1]=a1[i1+1];
        n1=n1-1;
        display1();
    }
    else
        printf("Invalid Position");
    return 0;
}
char push4(char elem4) 
{
    s4[++top4] = elem4;
    return 0;
}
char pop4() 
{
    return (s4[top4--]);
}
int pr4(char elem4) 
{
    switch (elem4)
    {
        case '#': return 0;
        case '(': return 1;
        case '+':
        case '-': return 2;
        case '*':
        case '/':
        case '%': return 3;
        case '^': return 4;
    }
    return 0;
}
void read_string(){
    printf("\nEnter the MAIN string: \n");
    gets(STR2);
    gets(STR2);
    printf("\nEnter a PATTERN string: \n");
    gets(PAT2);
    printf("\nEnter a REPLACE string: \n");
    gets(REP2);
}
void pattern_match()
{
    i2 = m2 = c2 = j2 = 0;
    while ( STR2[c2]!='\0')
    {
        if (STR2[m2] == PAT2[i2])
        {
            i2++;
            m2++;
            if ( PAT2[i2] == '\0')
            {
                for(k2=0; REP2[k2]!= '\0';k2++,j2++)
                    ans2[j2] = REP2[k2];
                flag2=1;
                i2=0;
                c2=m2;
            }
        }
        else //mismatch
        {
            ans2[j2] = STR2[c2];
            j2++;
            c2++;
            m2 = c2;
            i2=0;
        }
    }
    if(flag2==0)
        printf("Pattern doesn't found!!!");
    else
    {
        ans2[j2] = '\0';
        printf("\nThe RESULTANT string is:%s\n",ans2);
    }
}
void push3()
{
    int num3;
    if(top3==(size3-1))
        printf("Stack Overflow\n");
    else
    {
        printf("Enter the number to be pushed\n");
        scanf("%d",&num3);
        top3++;
        stack3[top3]=num3;
    }
}
void pop3()
{
    int num3;
    if(top3==-1)
        printf("Stack Underflow\n");
    else
    {
        num3=stack3[top3];
        printf("Popped element is %d\n",num3);
        top3--;
    }
}
void display3()
{
    int i3;
    if(top3==-1)
        printf("Stack Underflow\n");
    else
    {
        printf("Stack Contents....\n");
        for(i3=top3;i3>=0;i3--)
        {
            printf("%d\n",stack3[i3]);
            rev3[k3++]=stack3[i3];
        }
    }
}
void pali3()
{
    int i3,flag3=1;
    if(top3==-1)
        printf("Stack Underflow\n");
    else
    {
        for(i3=top3;i3>=0;i3--)
        {
            if(stack3[i3]!=rev3[--k3])
                flag3=0;
        }
        if(flag3==1)
            printf("It's Palindrome\n");
        else
            printf("It's not a Palindrome\n");
    }
}
void one()
{
    int choice1;
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
        scanf("%d",&choice1);
        switch(choice1)
        {
            case 1: create1();
                    break;
            case 2: display1();
                    break;
            case 3: insert1();
                    break;
            case 4: delete1();
                    break;
            case 5: exit(0);
            default: printf("\nInvalid choice:\n");
                    break;
        }
    }
}
void two()
{
    read_string();
    pattern_match();
}
void three()
{
    int choice3;
    printf("Enter the size for stack\n");
    scanf("%d",&size3);
    printf("1.Push\n2.Pop\n3.Display\n4.Check for Palindrome\n5.Exit\n");
    while(1)
    {
        printf("Enter the choice\n");
        scanf("%d",&choice3);
        switch(choice3)
        {
            case 1:push3();
                    break;
            case 2:pop3();
                    break;
            case 3:display3();
                    break;
            case 4:pali3();
                    break;
            case 5:exit(0);
            default:printf("Wrong choice...\n");
        }
    }
}
void four()
{
    char infx4[50], pofx4[50], ch4, elem4;
    int i4 = 0, k4 = 0;
    printf("\n\nEnter the infix expression ");
    scanf("%s", infx4);
    push4('#');
    while ((ch4 = infx4[i4++]) != '\0')
    {
        if (ch4 == '(')
            push4(ch4);
        else if (isalnum(ch4))
            pofx4[k4++] = ch4;
        else if (ch4 == ')')
        {
            while (s4[top4] != '(')
            {
                pofx4[k4++] = pop4();
            }
            elem4 = pop4(); 
        }
        else 
        {
            while (pr4(s4[top4]) >= pr4(ch4))
                pofx4[k4++] = pop4();
            push4(ch4);
        }
    }
    while (s4[top4] != '#') 
        pofx4[k4++] = pop4();
    pofx4[k4] = '\0'; /* make pofx as valid string */
    printf("\n\n Given infix expression: %s\n postfix expression is: %s\n", infx4, pofx4);
}
int five()
{
    char postfix5a[20];
    float result5a;
    printf("enter postfix expr\n");
    scanf("%s", postfix5a);
    result5a=eval_postfix5a(postfix5a);
    printf("The result = %f\n",result5a);
    return 0;
}
float eval_postfix5a(char postfix5a[])
{
    int i5a=0,k5a;
    char ch5a,op15a,op25a;
    float res5a;
    while(postfix5a[i5a]!='\0') 
    {
        ch5a=postfix5a[i5a];
        if(isdigit(ch5a)) 
        {
            k5a=ch5a-'0';
            push5a(k5a);
        }
        else
        {
            op25a=pop5a();
            op15a=pop5a();
            switch(ch5a)
            {
                case '+':push5a(op15a+op25a);
                        break;
                case '-':push5a(op15a-op25a);
                        break;
                case '*':push5a(op15a*op25a);
                        break;
                case '/':push5a(op15a/op25a);
                        break;
                case '^':push5a(pow(op15a,op25a));
                        break;
                default :printf("illegal\n");
                        exit(0);
            }
        }
        i5a++;
    }
    res5a=pop5a();
    if(top5a!=-1)
    {
        printf("not a valid expression");
        exit(1);
    }
    return(res5a);
}
void push5a(float num5a)
{
    top5a++;
    stack5a[top5a]=num5a;
    return;
}
float pop5a()
{
    float num5a;
    if(top5a == -1)
    {
        printf("not a valid");
        exit(0);
    }
    else
    {
        num5a=stack5a[top5a];
        top5a--;
        return(num5a);
    }
}
int six()
{
int num4;
printf("enter the number of disks : ");
scanf("%d", &num4);
printf("the sequence of moves involved in the tower of hanoi are :\n");
towers4(num4, 'a', 'c', 'b');
return 0;
}
void towers4(int num4, char frompeg4, char topeg4, char auxpeg4)
{
if (num4 == 1)
return;
{
printf("\n move disk 1 from peg %c to peg %c", frompeg4, topeg4);
}
towers4(num4 - 1, frompeg4, auxpeg4, topeg4);
printf("\n move disk %d from peg %c to peg %c", num4, frompeg4, topeg4);
towers4(num4 - 1, auxpeg4, topeg4, frompeg4);
}
void seven()
{
    printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    while(1)
    {
        printf("Enter your choice\n");
        scanf("%d",&ch7);
        switch(ch7)
        {
            case 1: CQ_Insert7();
                    break;
            case 2:CQ_Delet7();
                    break;
            case 3:CQ_Display7();
                    break;
            case 4: exit(0);
            default:printf("invalid option\n");
                 break;
        }
    }
}
void CQ_Insert7()
{
    char ele7;
    if(front7==(rear7+1)%SIZE7)
    {
        printf("Circular Queue Full\n");
        return;
    }
    if(front7==-1)
        front7++;
    printf("Enter the element to be inserted\n");
    scanf("\n%c",&ele7);
    rear7 = (rear7+1)%SIZE7;
    CQ7[rear7] =ele7;
}
void CQ_Delet7()
{
    char item7;
    if(front7 == -1)
    {
        printf("Circular Queue Empty\n");
        return;
    }
    else if(front7 == rear7)
    {
        item7=CQ7[front7];
        printf("Deleted element is: %c\n",item7);
        front7=-1;
        rear7=-1;
    }
    else
    {
        item7 =CQ7[front7];
        printf("Deleted element is: %c\n",item7);
        front7 = (front7+1)%SIZE7;
    }
}
void CQ_Display7()
{
    int i7;
    if(front7==-1)
    printf("Circular Queue is Empty\n");
    else
    {
        printf("Elements of the circular queue are..\n");
        for(i7=front7;i7<=rear7;i7=(i7+1)%SIZE7)
            printf("%c\t",CQ7[i7]);
    }
}
void eleven()
{
    int data11, ch, i, n;
    NODE11 *root=NULL;
   // clrscr();
    while (1)
    {
        printf("\n1.Insertion in Binary Search Tree");
        printf("\n2.Search Element in Binary Search Tree");
        printf("\n3.Delete Element in Binary Search Tree");
        printf("\n4.Inorder11\n5.Preorder11\n6.Postorder11\n7.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter N value: " );
                scanf("%d", &n);
                printf("\nEnter the values to create BST like(6,9,5,2,8,15,24,14,7,8,5,2)\n");
                for(i=0; i<n; i++)
                {
                    scanf("%d", &data11);
                    root=createtree11(root, data11);
                }
                break;
            case 2: 
                printf("\nEnter the element to search11: ");
                scanf("%d", &data11);
                root=search11(root, data11);
                break;
            case 3: 
                printf("\nEnter the element to delete: ");
                scanf("%d", &data11);
                root=del11(root, data11);
                break;
            case 4: 
                printf("\nInorder Traversal: \n");
                inorder11(root);
                break;
            case 5: 
                printf("\nPreorder Traversal: \n");
                preorder11(root);
                break;
            case 6: 
                printf("\nPostorder Traversal: \n");
                postorder11(root);
                break;
            case 7: 
                exit(0);
            default:
                printf("\nWrong option");
                break;
        }
    }
}
void twele()
{
    int v, choice;
    printf("\n Enter the number of vertices:");
    scanf("%d",&n12);
    for(i12=1;i12<=n12;i12++)
    {
        q12[i12]=0;
        visited[i12]=0;
    }
    for(i12=1;i12<=n12-1;i12++)
        reach[i12]=0;
    printf("\nEnter graph data in matrix form:\n");
    for(i12=1;i12<=n12;i12++)
        for(j12=1;j12<=n12;j12++)
            scanf("%d",&a12[i12][j12]);
    printf("1.BFS\n2.DFS\n3.Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
                printf("\nEnter the starting vertex:");
                scanf("%d",&v);
                bfs(v);
                if((v<1)||(v>n12))
                {
                    printf("\nBfs is not possible");
                }
                else
                {
                    printf("\nThe nodes which are reachable from %d:\n",v);
                    for(i12=1;i12<=n12;i12++)
                        if(visited[i12])
                            printf("%d\t",i12);
                }
                break;
        case 2:
                dfs(1);
                if(count12==n12-1)
                    printf("\nGraph is connected");
                else
                    printf("\nGraph is not connected");
                break;
        case 3:
                exit(0);
    }
}
void eight()
{
int choice;
long long int ph8;
int sem8;
char name8[20],usn8[15],branch8[5];
printf("--------MENU----------\n");
printf("1.create\n2.Insert from head\n3.Insert from tail\n4.Delete from head\n5.Delete from tail\n6.display\n7.exit\n");
printf("----------------------\n");
while(1)
{
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the name usn branch sem Phone no. of the student respectively\n");
scanf("%s%s%s%d%lld",name8,usn8,branch8,&sem8,&ph8);
create8(ph8,sem8,name8,usn8,branch8);
break;
case 2: printf("enter the name usn branch sem Phone no. of the student respectively\n");
scanf("%s%s%s%d%lld",name8,usn8,branch8,&sem8,&ph8);
insert_head8(ph8,sem8,name8,usn8,branch8);
break;
case 3: printf("enter the name usn branch sem Phone no. of the student respectively\n");
scanf("%s%s%s%d%lld",name8,usn8,branch8,&sem8,&ph8);
insert_tail8(ph8,sem8,name8,usn8,branch8);
break;
case 4:delete_head8();
break;
case 5:delete_tail8();
break;
case 6:display8();
break;
case 7: exit(0);
default:printf("invalid option\n");
}
}
}
void ten()
{
    char ans;
    int a,x,ch;
    node10 *p1,*p2,*p3;
    p1=p2=p3=NULL;
    do
    {
        printf("\n----------------<< MENU >>---------------");
        printf("\n\tPolynomial Operations :");
        printf(" 1.add");
        printf("\n2.evaluate");
        printf("\n3.Exit");
        printf("\n---------------------------------------------------");
        printf("\nEnter your choice==>");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
                    p1=create10();
                    display10(p1);
                    p2=create10();
                    display10(p2);
                    p3=add10(p1,p2);
                    display10(p3);
                    break;
            case 2 :
                    p1=create10();
                    display10(p1);
                    a=eval10(p1);
                    printf("\nValue of polynomial=%d",a);
                    break;
            case 3 :
                    exit(0);
                    break;
            default :
                    printf("\n invalid choice");
                    break;
        }
        printf("\nDo you want to continue(Y/N)?==>");
        scanf("\n%c",&ans);
    }while(ans=='Y'||ans=='y');
}
int main(void) {
  int z;
  system("clear");
  printf("\t\t\t\tWelcome\n\n");
  while(1){
  printf("Choose your option\n");
  printf("0.Exit\n");
  printf("1.INSERTING AND DELETING ELEMENTS OF AN ARRAY\n");
  printf("2.FIND AND REPLACE PATTERN STRING IN MAIN STRING\n");
  printf("3.SIMULATING STACK OPERATIONS TO VERIFY PALINDROME\n");
  printf("4.INFIX EXPRESSION TO POSTFIX EXPRESSION\n");
  printf("5.SUFFIX EXPRESSION EVALUATION\n");
  printf("6.Towers of Hanoi\n");
  printf("7.SIMULATING CIRCULAR QUEUE USING ARRAY\n");
  printf("8.SIMULATING STACK AND QUEUE USING LINKED LIST\n");
  printf("9.EMPLOYEE DATA MAINTENANCE USING DOUBLY LINKED LIST\n");
  printf("10.POLYNOMIAL EVALUATION USING SINGLY CIRCULAR LIST\n");
  printf("11.TREE TRAVERSALS ON BINARY SEARCH TREE\n");
  printf("12.GRAPH BASED TRAVERSAL METHODS – BFS & DFS\n");
  printf("13.LINEAR PROBING DEMONSTRATION USING HASH TABLE\n");
  scanf("%d",&z);
  system("clear");
  switch(z){
    case 0:exit(0);
    case 1:one();
          break;
    case 2:two();
          break;
    case 3:three();
          break;
    case 4:four();
          break;
    case 5:five();
          break;
    case 6:six();
          break;
    case 7:seven();
          break;
    case 8:eight();
          break;
    case 9:nine();
          break;
    case 10:ten();
          break;
    case 11:eleven();
          break;
    case 12:twele();
          break;
    case 13:thirteen();
          break;
    default:printf("invalid option\n");
           break;
  }
  
  }
  return 0;
}