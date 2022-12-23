#include<stdio.h>
void main()
{   int n;
    printf("enter the value of n ");
    scanf("%d",&n);
    int a[n],b[n],i;

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=n;i>=0;i--)
        {
        printf("%d\n",a[i]);
    }
}
