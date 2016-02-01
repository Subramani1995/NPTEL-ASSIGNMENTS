# NPTEL-ASSIGNMENTS
//to find continuous array sums and find maximum of them
#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int i,j,a[1000],sum[1000]={0},add=0,k=0,l,max;
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(l=0;l<n;l++)
  {
    
  for(i=0;i<n;i++)
  {
    for(j=i;j<=l;j++)
    {
      add=add+a[j];
    }
    sum[k]=add;
  
    add=0;
    k++;
  }
  }
  max=sum[0];
  for(i=0;i<k;i++)
  {
    if(sum[i]>max)
    {
      max=sum[i];
    }
  }
  printf("%d",max);
  
  return 0;
}
