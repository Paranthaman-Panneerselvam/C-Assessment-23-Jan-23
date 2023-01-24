#include<stdio.h>

void main()
{
int subject,max=0;
char subname[];
printf("Enter number of subject(s):");
scanf("%d",&subject);
for(int i=0;i<subject;i++)
{
    printf("Enter subject [%d] name:",subject);

    int l=strlen(subname);
    if(l>max)
    {
        max=l;
    }
}

}
/*int*sub=(int*)malloc(sizeof(int)*subject);
for(i=0;i<subject)
int*mar=(int*)malloc(sizeof(int)*subject);*/
