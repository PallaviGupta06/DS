#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j,k;
    printf("enter the order of 1 matrix");
    scanf("%d%d",&m,&n);
    printf("enter the order of 2 matrix");
    scanf("%d%d",&p,&q);
    if(m==p && n==q)
    {
        printf("enter 1 matrix");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

      printf("enter 2 matrix");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                c[i][j]=a[i][j]-b[i][j];
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
               printf("%d  ",c[i][j]);
               printf("    ");
               printf("\n");

        }
    }
}



