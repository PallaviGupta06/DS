#include<stdio.h>
void main()
{   int n,m;
    printf("enter the value of n ");
    scanf("%d",&n);
    int a[n],i;
    printf("enter the element ton be inserted");
    scanf("%d",&m);
    a[0]=m;

    for(i=1;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}

