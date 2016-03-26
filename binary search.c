# NPTEL-ASSIGNMENTS


#include<stdio.h>
int main()
{
    int n,a[10];
    int i,j,l,u,mid,k,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    int val;
    scanf("%d",&val);
    l=0;
    u=n-1;
    while(l<=u)
    {
        mid=(l+u)/2;
        if(a[mid]==val)
        {
            k=mid;
            c=1;
            break;
        }
        if(val<a[mid])
        {
            u=mid-1;
        }
        else if(val>a[mid])
        {
            l=mid+1;
        }
    }
    if(c==1)
    printf("element found in position %d",k+1);
    else
        printf("element not fount");
}
