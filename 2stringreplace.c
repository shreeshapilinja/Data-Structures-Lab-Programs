#include<stdio.h>
#include<string.h>
void read_string();
void pattern_match();
char STR[100],PAT[100],REP[100],ans[100];
int i,j,c,m,k,flag=0;
void main()
{
    read_string();
    pattern_match();
}
void read_string(){
    printf("\nEnter the MAIN string: \n");
    gets(STR);
    printf("\nEnter a PATTERN string: \n");
    gets(PAT);
    printf("\nEnter a REPLACE string: \n");
    gets(REP);
}
void pattern_match()
{
    i = m = c = j = 0;
    while ( STR[c]!='\0')
    {
        if (STR[m] == PAT[i])
        {
            i++;
            m++;
            if ( PAT[i] == '\0')
            {
                for(k=0; REP[k]!= '\0';k++,j++)
                    ans[j] = REP[k];
                flag=1;
                i=0;
                c=m;
            }
        }
        else //mismatch
        {
            ans[j] = STR[c];
            j++;
            c++;
        	m = c;
            i=0;
        }
    }
    if(flag==0)
        printf("Pattern doesn't found!!!");
    else
    {
        ans[j] = '\0';
        printf("\nThe RESULTANT string is:%s\n",ans);
    }
}