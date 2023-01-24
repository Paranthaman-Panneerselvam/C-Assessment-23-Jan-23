// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[]={1,1,1,12,3,2,4,1,1,2,2,4},max=0,maxcount=0,count=0,i,j;
    int n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
        if(a[i]==a[j])
        {
            count++;
        }
        }
        if(count>maxcount)
        {
            max=a[i];
            maxcount=count;
        }
    }
    printf("Max repeated element is %d and is repeated for %d times",max,maxcount);

    return 0;
}