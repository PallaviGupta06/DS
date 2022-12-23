#include<stdio.h>
void main(){
    int m,n;
    printf("enter the order of the matrix");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n],i,j;
    printf("enter the element of f i 1st matrix");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf(" %d  ",a[i][j]);
            printf("    ");


        }
        printf("\n");
    }
    printf("\n");
 for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           b[j][i]=a[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf(" %d  ",b[i][j]);
            printf("    ");

        }
        printf("\n");
    }
}
