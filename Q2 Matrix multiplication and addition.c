#include<stdio.h>
void add(int*,int,int,int*,int,int);
void multiplication(int*,int,int,int*,int,int);
void main()
{
    int rowa,cola,rowb,colb,rowr,colr,choice;
    printf("Enter the number of rows in matrix a:");
    scanf("%d",&rowa);
    printf("Enter the number of columns in matrix a:");
    scanf("%d",&cola);
    printf("Enter the number of rows in matrix b:");
    scanf("%d",&rowb);
    printf("Enter the number of columns in matrix b:");
    scanf("%d",&colb);
    int a[rowa][cola],b[rowb][colb];
    printf("Enter the elements of matrix A\n");
    for(int i=0;i<rowa;i++)
    {
        for(int j=0;j<cola;j++)
        {
            printf("Enter the element A[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter the elements of matrix B\n");
    for(int i=0;i<rowb;i++)
    {
        for(int j=0;j<colb;j++)
        {
            printf("Enter the element B[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
     add(a[0],rowa,cola,b[0],rowb,colb);
     printf("\n---------------------------------------------------\n");
     multiplication(a[0],rowa,cola,b[0],rowb,colb);

}


void add(int *a,int rowa,int cola,int*b,int rowb,int colb)
{
    int resa[rowa][cola];
    if((rowa!=rowb)&&(cola!=colb))
        {
        printf("Addition is not possible\n");
        }
   else
   {
       for(int i=0;i<rowa;i++)
       {
           for(int j=0;j<cola;j++)
           {
               resa[i][j]=(*a++)+(*b++);
           }
       }
       printf("Addition of A and B is\n");
       for(int i=0;i<rowa;i++)
       {
           for(int j=0;j<cola;j++)
           {
            printf("%d\t",resa[i][j]);
            }
            printf("\n");
        }
   }
}
void multiplication(int *a,int rowa,int cola,int*b,int rowb,int colb)
{
if(cola!=rowb)
{
    printf("Multiplication not possible for these matrices");
}

else
    {
        int resm[rowa][colb];
        for(int i=0;i<rowa;i++)
        {
            for(int j=0;j<colb;j++)
            {
                resm[i][j]=0;
                for(int k=0;k<rowb;k++)
                {
                    resm[i][j]+=*(a+i)*
                    *(b+j+k);
                }
            }
        }
        printf("The product of two matrices is:\n");

        for (int i=0;i<rowa;i++)
            {
            for (int j=0;j<colb;j++)
            {
                printf("%d\t",resm[i][j]);
            }
            printf("\n");
        }
    }
}
