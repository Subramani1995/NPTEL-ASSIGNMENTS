# NPTEL-ASSIGNMENTS

#include<stdio.h>
int main()
{
    int n,i,j,min,max,a[10],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
        if(a[0]<a[1])
            {
            min=a[0];
            max=a[1];
        }
        else
            {
            min=a[1];
            max=a[0];
        }
        k=2;
    }
    else
        {
        min=a[0];
        max=a[0];
        k=1;
    }
   
    for(i=k;i<n-1;i=i+2)
    {
        if(a[i]<a[i+1])
            {
            if(a[i]<min)
                {
                min=a[i];
            }
            if(a[i+1]>max)
                {
                max=a[i+1];
            }
        }
        else
            {
            if(a[i+1]<min)
                {
                min=a[i+1];
                
            }
            if(a[i]>max)
                {
                max=a[i];
            }
        }
            
    }
    printf("%d %d ",min,max);
    return 0;
}
