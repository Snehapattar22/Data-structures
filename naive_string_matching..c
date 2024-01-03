#include <stdio.h>
#include<stdlib.h>
char str[100],pat[100],rep[100],ans[100];
int i,j,k,c,m,flag=0;

void stringmatch()
{
    i=m=c=j=0;
    while(str[c]!='\0')
    {
        if(str[m]==pat[i])
        {
            m++;i++;
            if(pat[i]=='\0')
            {
                flag=1;
                for(k=0; rep[k]!='\0'; k++,j++)
                {
                    ans[j]=rep[k];
                }
                    i=0;
                    c=m;
                
            }
        }
        else
        {
            ans[j]=str[c];
            j++;c++;
            m=c;
            i=0;
        }
    }
    ans[j]='\0';
}
void main()
{
    printf("enter main str");
    gets(str);
    printf("enter pat str");
    gets(pat);
    printf("enter rep str");
    gets(rep);
    stringmatch();
    if(flag==1)
    {
        printf("the resultant str is %s\n",ans);
    }
    else{
        printf("patern string not found");
    }
}


























